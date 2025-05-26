/*
Write a C program that takes an integer from the user and checks the following using
different operators:
o Whether the number is even or odd.
o Whether the number is positive, negative, orzero.
o Whether the number is a multiple of both 3 and 5.


*/
#include <stdio.h>
int main(){
	int num,wather;
	printf("enter the number:");
	scanf("%d",& num);
	(num & 5)? printf("\n odd"):printf("\n even");

	printf("\n Enter a number: ");
	scanf("%d",&num);
	
	if(num < 0){
	printf("\n The number is positive. ");
}
    else if(num > 0){
    	printf("\n The number is nagative. ");
	}
	else{
		printf("\n The number is zero. ");
	}

    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number % 3 == 0 && number % 5 == 0) {
        printf("The number is a multiple of both 3 and 5.\n");
    } else {
        printf("The number is not a multiple of both 3 and 5.\n");
    }

}


