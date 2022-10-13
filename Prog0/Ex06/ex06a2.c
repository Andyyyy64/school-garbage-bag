#include <stdio.h>

int main() {
int i, n = 0;
int r = 1;:
printf("階乗する数を入力してください");
scanf("%d", &n);
if(n < 13 && n >= 0){
for (i=n; i>0; i--){
r *=i;
}
printf("%d\n",r);
}
else if(n>=13 || n<0) printf("計算できません\n");
  return 0;

}
