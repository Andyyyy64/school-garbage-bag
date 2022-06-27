#include<stdio.h>
int main()
  int a,b;
  printf("２つ整数を入力してください:");
  scanf("%d %d",&a,&b);
printf("和 = %d\n 差 =%d\n 積 =%d\n 商 =%d、 余り =%d\n ",a+b,a-b,a*b,a/b,a%b);
  return 0;
}
