#include<stdio.h>
#include<math.h>
float root();
int main(){
	int a,b,c;
	printf("enter a: ");
	scanf("%d",&a);
	printf("enter b: ");
	scanf("%d",&b);
	printf("enter c: ");
	scanf("%d",&c);	
		float D = (b*b -4*a*c);
		float rootD = pow(D,0.5);
		printf(" the root one is %f \n", (-b+ rootD)/(2*a));
		printf(" the root second is %f",(-b- rootD)/(2*a));
		return 0;
	}
