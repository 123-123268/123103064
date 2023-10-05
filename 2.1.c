#include<stdio.h>
int main(){
	int a;
	int b;
	printf("enter a:");
	scanf("%d",&a);
	printf("enter b:");
	scanf("%d",&b);
	if (a>=b){
		printf("add is %d",a+b);
	}
	if (a<b){
		printf("subtraction is %d",b-a);
	}
	return 0;
}
