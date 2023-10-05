#include<stdio.h>
int main(){
	int a, b, c, d;
	printf("enter a: ");
	scanf("%d",& a);
	printf("enter b: ");
	scanf("%d",&b);
	printf("enter c: ");
	scanf("%d",&c);
	printf("enter d: ");
	scanf("%d",&d);

	if(a>b){
		if(a>c){
			if(a>d){
				printf("%d is greatest",a);
			}
	}
}
	if(b>a){
		if(b>c){
			if(b>d){
				printf("%d is greatest",b);
			}
	}
}
	if(c>a){
		if(c>b){
			if(c>d){
				printf("%d is greatest",c);
			}
	}
}
	if(d>a){
		if(d>b){
			if(d>c){
				printf("%d is greatest",d);
			}
	}
	}
	return 0;
}
	
