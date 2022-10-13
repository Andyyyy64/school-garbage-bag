#include<stdio.h>
#define N 5
int main(){
    int data[5][5]={{1,1,1,1,1},{0,1,1,1,1},{0,0,1,1,1},{0,0,0,1,1},{0,0,0,0,1}};
    int n,i,j;
    printf("反転する方向を指定してください（縦：0、横：1)");
    scanf("%d",&n);
    if(n==0){
        for(i=N-1;i>=0;i--){
            for(j=0;j<N;j++){
                printf("%d",data[i][j]);
            }
            printf("\n");
        }
    }
    else if(n==1){
        for(i=0;i<N;i++){
            for(j=N-1;j>=0;j--){
                printf("%d",data[i][j]);
            }
            printf("\n");
        }
    }
    else printf("不適切な数値が入力されました\n");
    return 0;
}
