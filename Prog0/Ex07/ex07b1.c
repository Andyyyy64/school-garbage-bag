#include <stdio.h>
int main()
{
    int Input[100];
    int Odd[100];
    int Even[100];
    int num,In,i,j,g,k,n,a;
    k = g = In = n = a = 0;

    while(1){
            scanf("%d",&Input[n]);
            if(Input[n] <= 0)
                    break;
            n++;
    }

    for( i = 0; i < n; i++ ){

            a = Input[i];

            if( a%2 == 0 ){

                    Even[g] = a;
                    g++;
            }

            else if( a%2 == 1){

                    Odd[k] = a;
                    k++;
            }
    }

    printf("Input: ");
    for(j = 0; j < n; j++){
        printf("%d", Input[j]);
        printf(" ");
    }

    printf("\n");

    printf("Odd:   ");
    for( j = 0; j < k; j++){
            printf("%d", Odd[j]);
            printf(" ");
    }

    printf("\n");

    printf("Even:  ");
    for(j = 0; j < g; j++){
            printf("%d", Even[j]);
            printf(" ");
    }

    printf("\n");

    return 0;
}
