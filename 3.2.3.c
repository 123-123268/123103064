#include<stdio.h>
int main(){
	int n;
	printf("enter a number: ");
	scanf("%d",&n);
	int f =0;
	for(int i=1;i<=(n);i++){
		f=f+(2*(i));
		
	}
	printf("total sum is %d",f);
	return 0;
}
