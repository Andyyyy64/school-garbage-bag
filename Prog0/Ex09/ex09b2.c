#include<stdio.h>
#define GYOU 3
#define RETU 5

int main(){
        int data[GYOU][RETU],i,j,sum=0,max,a,b;

        printf("Input 3 x 5 data\n");

        for(i=0;i<GYOU;i++)
                 for(j=0;j<RETU;j++)
                         scanf("%d", &data[i][j]);

        for(i=0;i<GYOU;i++)
                 for(j=0;j<RETU;j++)
                         sum+=data[i][j];

        printf("sum=%d\n",sum);

        max=data[0][0];

        for(i=0;i<GYOU;i++){
                 for(j=0;j<RETU;j++){
                         if(max<data[i][j]){
                                 max=data[i][j];
                                 a=i;
                                 b=j;
                         }
                 }
        }

        printf("max:array[%d][%d]=%d\n",a,b,max);
return 0;
}
