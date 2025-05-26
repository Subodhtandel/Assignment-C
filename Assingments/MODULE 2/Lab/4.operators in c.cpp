/*Write a C program that accepts two integers from the user and performs
arithmetic, relational, and logical operations on them. Display the results.
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
	
	printf("\n enter the opreators,(+,-,*,/): ");
	scanf("%c",&op);
	
	printf("\n Arithmetic Operators\n");
	printf("a + b= %d\n",a + b);
	printf("a - b= %d\n",a - b);
	printf("a * b= %d\n",a * b);
	printf("a / b= %d\n",a / b);
	
	
	printf("\n Relational Operations\n");
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);
    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a >= b: %d\n", a >= b);
    printf("a <= b: %d\n", a <= b);

    printf("\n Logical Operations \n");
    printf("a && b: %d\n", a && b);  
    printf("a || b: %d\n", a || b);  
    printf("!a: %d\n", !a);          
    printf("!b: %d\n", !b);  
    
}
/*
enter the first digit: 34

enter the second digit: 12

 enter the opreators,(+,-,*,/):
 Arithmetic Operators
a + b= 46
a - b= 22
a * b= 408
a / b= 2

 Relational Operations
a == b: 0
a != b: 1
a > b: 1
a < b: 0
a >= b: 1
a <= b: 0

 Logical Operations
a && b: 1
a || b: 1
!a: 0
!b: 0


*/
