#include<stdio.h>

int main()
{
    int turu, kame, ten, num, ashi, flg;
    flg=0;
    turu=0;
    kame=0;
    ten=0;
    num=0;
    ashi=0;
 
    printf("頭数を入力してください：");
    scanf("%d", &num);

    printf("足の数を入力してください：");
    scanf("%d", &ashi);

    for(turu=0;turu<=num;turu++)
    {
        for(kame=0;kame<=num-turu;kame++)
        {
            ten= num-kame-turu;
            if(ashi==turu*2+kame*4+ten*6){
                flag=1;
                printf("鶴が%d、亀が%d、てんとう虫が、%d\n", turu, kame, ten);
            }
        }
    }
    if(flg==0) printf("NOT found!\n");    

    return 0;
}
