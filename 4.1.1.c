#include<stdio.h>
int main(){
	int n;
	printf("enter n:");
	scanf("%d",&n);
	if(n>=65 && n<=90){
		for (int i=65; i<=n; i++){
			for(int k=65; k<= n-i; k++){
				printf(" ");
			}
			for(int j =65; j<=i; j++){
				printf("%c",i);
			}
			printf("\n");
		}
		 }
		else{
			printf("not valid number assigned to n:");
		}
	return 0;
}
