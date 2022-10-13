#include <stdio.h>
double function( double, double );

int main()
{
  double a, b;

  printf("係数aとbの値を入力してください： ");
  scanf("%lf %lf", &a, &b);
  printf("関数の値は以下のとおりです。\n");
function( a,  b);

  return 0;
}

double function( double n, double m)
{
  double x,y;
  for(x=1;x<=4;x++){
    y=n*x+m;
    printf("x=%3.1fのときy=%3.1f\n",x,y);
  }
}
