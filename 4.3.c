#include<stdio.h>
#include<math.h>
int fact(int n){
	int f=1;
	for(int i=1; i<=n;i++){
		f=f*i;
	}
	return f;
}
int main(){
int n, x;
printf("enter x: ");
scanf("%d",&x);
printf("enter n: ");
scanf("%d",&n);
float sum=0, a;
int p=1;
for(int i =1; i<=n;i+=2){
	a=(float)(pow(x,i)/fact(i));
	if(p%2==0){
		sum+=a;
		p++;
	}
	else{
		sum-=a;
		p++;
	}
}
printf("sum is %f \n",sum);
return 0;
}

