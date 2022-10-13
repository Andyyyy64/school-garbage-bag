#include <stdio.h>

int main()
{
  int a;
  
  printf("整数値を入力してください");
  scanf("%d",&a );
  printf("入力された値は%dで、これを5で割った余りは%dです。",a,a%5);

  return 0;
}
