#include<stdio.h>
int main(){
	int n;
	printf("enter a number: ");
	scanf("%d",&n);
	int fact =1;
	if(n>0){
	for (int i=1;i<=n;i++){
		fact=fact*i;
	}	
		printf("factorial is %d",fact);
    }
    else if (n=0){
    	n=0;
    	printf("factorial is %d",n);
	}
    else {
    	printf("no factorial possible.");
	}
}
