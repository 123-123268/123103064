#include<stdio.h>
int main (){
	float p,r,t;
	printf(" the principal amount is:");
	scanf("%f",&p);
	printf(" rate is :");
	scanf("%f",&r);
	printf("time is:");
	scanf("%f",&t);
	printf(" the simple interest is %f",p*r*t/100);	
	return 0;
}
