#include<stdio.h>
int main(){
	float a ,b;
	char op;
	printf("enter operator:");
	scanf("%c",&op);
	printf("enter a:");
	scanf("%f",&a);
	printf("enter b:");
	scanf("%f",&b);
	switch(op){
		case '*':
			printf("%f \n",a*b);
			break;
		case '/':
			printf("%f\n",a/b);
			break;
		case '+':
			printf("%f\n",a+b);
			break;
		case '-':
			printf("%f\n",a-b);
			break;			
	}
	return 0;
}
