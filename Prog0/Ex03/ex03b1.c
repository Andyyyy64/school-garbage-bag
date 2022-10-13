#include<stdio.h>
int main(){
	double a,h,resolt;
	printf("三角形の底辺の長さと高さをcmで入力してください : ");
	scanf("%lf%lf",&a,&h);
	resolt= a+h/2;
	printf("三角形の面積は %9.6f 平方cmです",resolt);
	return 0;
}

