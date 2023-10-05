#include<stdio.h>
int main(){
	int n,t,remainder,sum=0;
	printf("enter a number : ");
	scanf("%d",&n);
	t=n;
	while(t!=0){
		remainder =t%10;
		sum=sum+remainder;
		t=t/10;
	}
	
	printf("sum of digits of %d = %d",n,sum);
return 0;
}
