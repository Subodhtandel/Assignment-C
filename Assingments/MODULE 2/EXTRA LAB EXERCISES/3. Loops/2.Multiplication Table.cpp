/*
Write a C program that takes an integer input from the user and prints its multiplication
table using a for loop.
? Challenge: Allow the user to input the range of the multiplication table (e.g., from 1 to N).

*/
#include <stdio.h>
int main(){
	int num,start,end;
	printf("\n Enter the integer: ");
	scanf("%d",&num);
	
	printf("\n Enter the first value : ");
	scanf("%d",&start);
	
	printf("\n Enter the second value: ");
	scanf ("%d",&end);
	
	if(start > end){
		printf("Invalid range.");
		return 1;
	}
	printf("multiplication table %d from %d to %d:\n",num,start,end);
	for(int i=start; i<=end; i++){
		printf("%d x %d = %d\n",num,i,num*i);
	}
}

