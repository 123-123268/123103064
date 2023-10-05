#include<stdio.h>
int main(){
	int n;
	int r1,r2,r3,r4, t, sum=0;
	printf("enter n:");
	scanf("%d",&n);
	if (n>9999){
		printf("invalid no.");
	}
	else{
		t=n;
	
		r1 = t%10;
		t=t/10;
		r2= t%10;
		t =t/10;
		r3= t%10;
	    t=t/10;
	    r4=t%10;
	    t=t/10;
		
	}
	switch(r4){
		case 0: printf("");
		break;
		case 1: printf("one thousand ");
		break;
		case 2: printf("two thousand ");
		break;
		case 3: printf("three thousand ");
		break;
		case 4: printf("four thousand ");
		break;
		case 5: printf("five thousand ");
		break;
		case 6: printf("six thousand ");
		break;
		case 7: printf("seven thousand ");
		break;
		case 8: printf("eight thousand ");
		break;
		case 9: printf("nine thousand ");
		break;
	}
	switch (r3){
		
		case 0: printf("");
		break;
		case 1: printf("one hundred ");
		break;
		case 2: printf("two hundred ");
		break;
		case 3: printf("three hundred ");
		break;
		case 4: printf("four hundred ");
		break;
		case 5: printf("five hundred ");
		break;
		case 6: printf("six hundred ");
		break;
		case 7: printf("seven hundred ");
		break;
		case 8: printf("eight hundred ");
		break;
		case 9: printf("nine hundred ");
		break;
	}
	switch(r2){
		case 0: printf("");
		break;
		case 1:
			if(r1==1){
				printf("eleven");
			}
			else if (r1==2){
				printf("twelve");
			}
			else if (r1==3){
				printf("thirteen");
			}
			else if (r1==4){
				printf("fourteen");
			}
			else if (r1==5){
				printf("fifteen");
			}
			else if (r1==6){
				printf("sixteen");
			}
			else if (r1==7){
				printf("seventeen");
			}
			else if (r1==8){
				printf("eighteen");
			}
			else if (r1==9){
				printf("nineteen");
			}
		break;
		case 2: printf("twenty ");
		break;
		case 3: printf("thirty ");
		break;
		case 4: printf("fourty ");
		break;
		case 5: printf("fifty ");
		break;
		case 6: printf("sixty ");
		break;
		case 7: printf("seventy ");
		break;
		case 8: printf("eighty ");
		break;
		case 9: printf("ninty ");
		break;
	}
	if(r2!=1){
		switch(r1){
			case 0: printf("");
			break;
			case 1: printf("one");
			break;
			case 2: printf("two");
			break;
			case 3: printf("three");
			break;
			case 4: printf("four");
			break;
			case 5: printf("five");
			break;
			case 6: printf("six");
			break;
			case 7: printf("seven");
			break;
			case 8: printf("eight");
			break;
			case 9: printf("nine");
			break;
		}
	}
	return 0;
}
