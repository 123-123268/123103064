#include<stdio.h>
int main(){
	int n;
	printf("enter a number: ");
	scanf("%d",&n);
	int f =1;
	for(int i=1;i<=(n);i++){
		f=f+(5*(i-1));
	}
	printf("total sum is %d",f);
	return 0;
}
