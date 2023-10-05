#include<stdio.h>
int main(){
	int a,b,c;
	printf("enter a:");
	scanf("%d",&a);
	printf("enter b: ");
	scanf("%d",&b);
	printf("enter c: ");
	scanf("%d",&c);
	if (a>b) {
		if(b>c){
			printf("%d is greatest and %d is smallest",a,c);
		}
		else if (b<c){
			if(a>c){
			printf("%d is the greatest and %d is the smallest",a,b);
			}
			else{
				printf("%d is the greatest and %d is the smallest",c,b);
			}
			}
		}
	else if (b>a){
		if (b<c){
		    printf("%d is the greatest and %d is the smallest",c,a);	
		}
		else{
			if(a>c){
			printf("%d is the greatest and %d is the smallest",b,c);	
			}
			else {
			printf("%d is the greatest and %d is the smallest",b,a);
			} 
		}	
		}	 
	else if (a>c){
		if (c>b){
			printf("%d is the greatest and %d is the smallest",a,b);
		}
		else {
		if (a>b){
		    printf("%d is the greatest and %d is the smallest",a,c);	
		}
		else {
			printf("%d is the greatest and %d is the smallest",b,c);
		}	
		}
	}
	else if(c>a){
		if(b<a){
			printf("%d is the greatest and %d is the smallest",c,b);
		}
		else{
			if(b>c){
				printf("%d is the greatest and %d is the smallest",b,a);
			}
			else{
			printf("%d is the greatest and %d is the smallest",c,a);	
			}
		}
	}
	else if(b>c){
		if (a<c){
			printf("%d is the greatest and %d is the smallest",b,a);
		}
		else{
			if (a>b){
				printf("%d is the greatest and %d is the smallest",a,c);
			}
			else{
				printf("%d is the greatest and %d is the smallest",b,c);
			}
		}
	}
	else {
		if (b>a){
			printf("%d is the greatest and %d is the smallest",c,a);
		}
		else {
			if(a>c){
				printf("%d is the greatest and %d is the smallest",a,c);
			}
			else{
				printf("%d is the greatest and %d is the smallest",c,b);
			}
		}
	}
	return 0;
	}
	
