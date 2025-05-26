/*LAB EXERCISE 1: Simple Calculator
? Write a C program that acts as a simple calculator. The program should take two numbers
and an operator as input from the user and perform the respective operation (addition,
subtraction, multiplication, division, or modulus) using operators.
? Challenge: Extend the program to handle invalid operator inputs.
*/


#include <stdio.h> 
int main()
{
	int a,b;
	char op;
	printf("\n enter the first digit: ");
	scanf("%d",&a);
	
	printf("\n enter the second digit: ");
	scanf("%d",&b);
	
	printf("\n enter the opreators,(+,-,*,/,%%): ");
	scanf(" %c",&op);

	switch (op) {
        case '+':
            printf("\n %d a + b",a + b);
            break;
        case '-':
            printf("\n %d a - b",a - b);
            break;
        case '*':
            printf("\n %d a * b",a * b);
            break;
        case '/':
            if (b != 0)
            printf("\n %d a / b",a / b);
            else
                printf("Error: Division by zero is not allowed.\n");
            break;   	
		case '%':
            if (b != 0)
                printf("Result: %d\n", a % b);
            else
                printf("Error: Modulus by zero is not allowed.\n");
            break;
        default:
            printf("Error: Invalid operator '%c'.\n", op);

        }
    }
