#include<stdio.h>
int main(){
    int n,i=0,j=o;
    double sum;
    while(1){
        printf("得点を入力して下さい");
        scanf("%d",&n);
        if(n<0) break;
        i++;
        sum += n;
        if(n>=50) j++;
    }
    prinf("合格者 %d 名, 平均点 %.6f 点\n合格者数 %d 名、不合格者数 %d 名\n",i,sum/i,j,i-j);
    return 0;
}
