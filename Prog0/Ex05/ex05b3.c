#include <stdio.h>
int main()
{
    int mm, dd, sum=0,i=1;
    printf("月と日を空白で区切って入力してください　:");
    scanf("%d%d",&mm,&dd);
    while(i<mm){
        if(i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12)
        sum += 31;
        else if(i==2)
        sum += 28;
        else
        sum += 30;
        i++;
    }
    sum += dd;
    switch(sum%7){
        case 0:
        printf("2022年%d月%d日は%d日目で金曜日です\n",mm,dd,sum);
        break;
        case 1:
        printf("2022年%d月%d日は%d日目で土曜日です\n",mm,dd,sum);
        break;
        case 2:
        printf("2022年%d月%d日は%d日目で日曜日です\n",mm,dd,sum);
        break;
        case 3:
        printf("2022年%d月%d日は%d日目で月曜日です\n",mm,dd,sum);
        break;
        case 4:
        printf("2022年%d月%d日は%d日目で火曜日です\n",mm,dd,sum);
        break;
        case 5:
        printf("2022年%d月%d日は%d日目で水曜日です\n",mm,dd,sum);
        break;
        case 6:
        printf("2022年%d月%d日は%d日目で木曜日です\n",mm,dd,sum);
        break;
    }
    return 0;
}
