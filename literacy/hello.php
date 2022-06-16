<html><head>
    <META HTTP-EQUIV="Content-Type" CONTENT="text/html;charset=UTF-8">
    <title>Hello</title>
</head>
<body bgcolor=abcdef>
<?php
date_default_timezone_set('Asia/Tokyo');
$db=new PDO('sqlite:hello.db');

$query='create table if not exists
        greeting (hello text, reply text, weight int);';
$db->query($query);

$reply="hello";if(isset($_POST["reply"])){$reply=$_POST["reply"];}
$hello="";if(isset($_POST["hello"])){$hello=$_POST["hello"];}
$hello2="hello";

if($reply){
    $m=$db->query("select weight from greeting 
                   where hello='$hello' and reply='$reply';")->fetch();
    if($m[0]){
    $weight=$m[0]+1;
    $db->query("update greeting set weight=$weight 
                    where hello='$hello' and reply='$reply';");
    } else {
    $db->query("insert into greeting values ('$hello','$reply',1);");
    }

    $m=$db->query("select reply from greeting 
            where hello like '%$reply%' order by weight;")->fetch();
    if($m[0]){
    $hello2=$m[0];
    } else {
    $hello2=$reply."?";
    }
}

print "<center><form method=post>
<input type=hidden name=hello value=$hello2><table>
  <tr bgcolor=ffee00 align=center><td>(Me))</td><td>$hello</td></tr>
  <tr bgcolor=00eeff align=center><td>(You)</td><td>$reply</td></tr>
  <tr bgcolor=ffee00 align=center><td>(Me)</td><td>$hello2</td></tr>
  <tr><td></td><td ><input name=reply size=100></td></tr>
</table></form></center>";
?>
</body></html>
