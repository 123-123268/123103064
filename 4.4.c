#include<stdio.h>
int main(){
	int n, i;
	printf("enter number");
	scanf("%d",&n);
	for(i=2;i<=(n-1);i++){
		if(n%i==0)
		printf("not prime");
        break;
}
    for(i=2;i<=(n-1);i++){
    	if (n%i!=0)
    	printf("prime.");
    	break;
	}
	return 0;
}
