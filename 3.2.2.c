#include<stdio.h>
int main(){
	int n, t, sum=1;
	printf("enter n: ");
	scanf("%d",&n);
	t=n/5;
	for(int i =1; i<=t;i++){
		sum =sum + 5*(i-1);
	printf("sum is %d \n",sum);		
	}
	printf("sum is %d",sum);

	return 0;
}
