#include<stdio.h>
int main(){
	int n;
	printf("enter n:");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
		printf("*");
	}
	for(int k=n-i+1;k>0;k--){
		printf(" ");
		}
		for(int l=1;l<=i;l++){
		printf("*");
		}
		printf("\n");
	}
	return 0;
}
