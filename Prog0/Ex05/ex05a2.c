#include <stdio.h>

int main() {

  int n, r, count = 0;
  printf("初期の入力：");
  scanf("%d", &n);
  while(n>0){
    count++;
    r= n%2;
    n/=2;
    printf("%d回目のループ　商%d　あまり%d　\n", count, n, r);

  }
  return 0;
}
