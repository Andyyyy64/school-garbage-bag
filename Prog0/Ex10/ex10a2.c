#include<stdio.h>
#define TATE 20
#define YOKO 5

int main(){
        int kyouka,seito,i,j,sm;
        double data[TATE][YOKO];
        scanf("%d%d",&kyouka,%seito);

        fot( i=0;i<seito;i++){
                for(j=0;j<kyouka;j++){
                        scanf("%lf",&data[i][j]);
                }
        }
        printf("科目数:%d,学生数:%d\n",kyouka,seito);
        for(i=0;i<seito;i++){
                sm=0;
                for(j=0;j<sito;j++){
                        printf("%.f     ",data[i][j]);
                        sm+=data[i][j];
                }
                printf("   :%.1f\n",(double)sm/kyouka);
        }
        for(j=0;j<kyouka;j++){
                sm=0;
                for(i=0;i<seito;i++){
                        sm+=data[i][j];
                        data[seito+1][j] = (double)sm/seito;
                }
                printf("%.1f    ",data[seito+1][j];
        }
        printf("%.1f    ",data[seito+1][j];
      }
      printf("\n");
      return 0;
      }
