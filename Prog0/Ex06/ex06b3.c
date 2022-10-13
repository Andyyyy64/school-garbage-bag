#include<stdio.h>
int main()
  {
    int a,b,count;
                    
printf("1から9までの整数を入力してください :");
scanf("%d",&a);

for( count=1 ; count<=a ; count++)
{
    for( b=1 ; b<=count ; b++)
     {
        printf("%d",count);
    }
    printf("\n");
}
                
for( count=a-1 ; count>=1 ; count--)
{
    for( b=0 ; b<count ; b++ )
    {
        printf("%d",count);
    }
    printf("\n");

}
                    
    return 0;
}
