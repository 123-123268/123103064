#include<stdio.h>
#include<math.h>
int main(){
	int n, sum=0;
	printf("enter n: ");
	scanf("%d",&n);
	for (int i=1; i<=n; i++){
	sum = sum +(2*i-1)*pow(-1,i+1);
	}
	printf("sum is %d",sum);
	return 0;
}
