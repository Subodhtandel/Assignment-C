/*Write a C program to check if a number is even or odd using an if-else
statement. Extend the program using a switch statement to display the month
name based on the user’s input (1 for January, 2 for February, etc.)
*/
#include <stdio.h>
int main(){
	int num;
	printf("enter the number:");
	scanf("%d",& num);
	
	if(num % 2==0){
	printf("\n Number is odd ");
	}else{
	printf("\n Number is even ");	
}
	int month;
	printf("\nEnter the number of month(1to12): ");
	scanf("%d",&month);
	
	switch(month){
		case 1:
			printf("\n January");
			break;
		case 2:
			printf("\n Fabruary");
			break;
		case 3:
			printf("\n March");
			break;
		case 4:
			printf("\n April");
			break;
		case 5:
			printf("\n May");
			break;
		case 6:
			printf("\n June");
			break;
		case 7:
			printf("\n Julay");
			break;
		case 8:
			printf("\n August");
			break;
		case 9:
			printf("\n September");
			break;
		case 10:
			printf("\n October");
			break;
		case 11:
			printf("\n November");
			break;
		case 12:
			printf("\n December");
			break;
		default:
            printf("Invalid month number! Please enter a number between 1 and 12.\n");
            break;
	}
}
/*
enter the number:12

 Number is odd
Enter the number of month(1to12): 5

 May
*/
