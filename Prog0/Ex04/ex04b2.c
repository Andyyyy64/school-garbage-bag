#include <stdio.h>

int main(){
  double temp;
  int mois;

  printf("温度と湿度を入力して下さい\n");
  scanf("%lf%d",&temp ,&mois);
  printf("温度：%.2f度 湿度：%d％\n",temp,mois);
  if(temp < 20) printf("寒い\n");
  
  else if(temp >= (double)20 && temp < (double)28){
    if (mois < 60) printf("快適\n");
  }
  
  else if(temp >= (double)20 && mois >= 60) printf("蒸し暑い\n");
  else if(temp >= (double)28 && mois < 60) printf("暑い\n");
  return 0;
}
