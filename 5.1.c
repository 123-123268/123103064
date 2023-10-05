#include<stdio.h>
int main(){
	int date, month, year;
	printf("enter date: ");
	scanf("%d",&date);
	printf("enter month : ");
	scanf("%d",&month);
	printf("enter year:");
	scanf("%d",&year);
	if(date==1){
		printf("1st ");
	}
	else if(date==2){
		printf("2nd ");
	}
	else if(date==3){
		printf("3rd ");
	}
	else if(date>3 && date<=31){
		printf("%dth ",date);
	}
	else{
		printf("notvaliddate.");
	}
	switch(month){
		case 1 :printf("january");
		break;
		case 2 :printf("february");
		break;
		case 3 :printf("march");
		break;
		case 4 :printf("april");
		break;
		case 5 :printf("may");
		break;
		case 6 :printf("june");
		break;
		case 7 :printf("july");
		break;
		case 8 :printf("august");
		break;
		case 9 :printf("september");
		break;
		case 10 :printf("october");
		break;
		case 11 :printf("november");
		break;
		case 12 :printf("december");
		break;
		default :printf("not valid month.");
	}
	printf(" %d",year );
	return 0;
}
	
