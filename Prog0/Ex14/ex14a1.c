#include<stdio.h>
#include<stdlib.h>
#define NMAX 20
int main(){
  int i,j,data[N];
  for(i=0;i<=N;i++){
    if(data[i]<0) break;
    else scanf("%d",data[i]);
  }

  for(j=0;j<=i;j++)
     histgram(data[j]);

  return 0;
}

  }
  else{
    printf("[%2d]:",x);

    for(k=0;k<=x;k++)
      printf("#");

    printf("\n");
  }
}
