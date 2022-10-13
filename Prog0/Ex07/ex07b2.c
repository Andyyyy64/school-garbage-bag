#include<stdio.h>
int main(){
	int num[8],m,n,i;
	printf("8個の整数を空白で区切って入力して下さい。\n");

	for (i=0;i<8;i++){
		scanf("%d",&num[i]);
		if(i==0){
		 m=num[i];
		 n=num[i];
		}
		if(m<num[i]){
			m = num[i];
		}
		if(num[i]<n){
			n = num[i];
		}
	}
	printf("最大値は%dです。\n", m);
	printf("最小値は%dです。\n", n);
	printf("入力した整数の表示\n");
	for(i=0;i<8;i++){
		printf("%d",num[i]);
		printf(" ");
	}
	return 0;
}
