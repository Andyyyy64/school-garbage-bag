include <stdio.h>
#include <stdlib.h>

#define MAXINPUT 1073741823

int digits(int);
int get_digit(int,int);
int main(){
  int i,data,ans=0,keta;

  printf("1からMAXINPUTまでの整数を入力してください；");

  scanf("%d",&data);

  if(1<=data&&data<=MAXINPUT){
    keta = digits(data);
    for(i=1;i<=keta;i++){
      ans += get_digit(data,i);
    }
  printf("%d\n",ans);
  }
  else{
        printf("illegal value\n");
        exit(8);
  }

  return 0;
}

  int digits(int x){
  int z=1,y=10;
  while((x/y) > 0){
    y*=10;
    z++;
  }
  return z;
 }

  int get_digit (int x,int pos){
    int i,j,k=1;

    for(i=1;i<pos;i++){
      k*=10;
    }

    j = (x/k)%10;

    return j;
  }
