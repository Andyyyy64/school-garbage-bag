#include<stdio.h>
int main()
{
int a,b;

printf("整数を入力してください:");
scanf("%d",&a);

for( b=3 ; b<=a ; b+=5)
{
printf("%d\n",b);
}

return 0;
}
sshsv211:Ex06 s1300120[55]$ cat ex06b2_2.c 
#include<stdio.h>
int main()
{
int a,b,c,d;

printf("整数を入力してください:");
scanf("%d",&a);

b=a/5;
c=b*5;

for( d=c ; d>=5 ; d-=5)
{
printf("%d\n",d);
}

return 0;
}
