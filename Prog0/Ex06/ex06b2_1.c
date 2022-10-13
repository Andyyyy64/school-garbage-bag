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
