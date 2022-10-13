#include<stdio.h>

int main()
{
    int i;
  for(i=0;i<=10;i++){
      int m[i];
      i={2*m[i-1]+1};
      printf("%d: %d",i,m[i]);
  };
  return 0;
}
