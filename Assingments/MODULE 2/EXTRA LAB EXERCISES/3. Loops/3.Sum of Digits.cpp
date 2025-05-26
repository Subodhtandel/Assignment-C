/*
Write a C program that takes an integer from the user and calculates the sum of its digits
using a while loop.
? Challenge: Extend the program to reverse the digits of the number. 
*/
#include <stdio.h>
int main(){
	int num, originalNum, digit, sum = 0, reverse = 0;
	printf("Enter the Integer:");
	scanf("%d",&num);
	 originalNum = num;
    if (num < 0) {
        num = -num;
    }
    while (num != 0) {
        digit = num % 10;          
        sum += digit;              
        reverse = reverse * 10 + digit; 
        num /= 10;                  
    }
    printf("Sum of digits of %d = %d\n", originalNum, sum);
    printf("Reversed number of %d = %d\n", originalNum, (originalNum < 0 ? -reverse : reverse));
}
