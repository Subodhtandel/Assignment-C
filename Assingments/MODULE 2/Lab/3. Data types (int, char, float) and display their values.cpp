/*Write a C program that includes variables, constants, and comments. Declare
and use different data types (int, char, float) and display their values.
*/
#include <stdio.h>
int main(){
	int Integer;
	char Character;
	float InputFloat;
 
  printf(" Please Enter a Character :  ");
  scanf("%c", &Character);
  
  printf(" Please Enter an Integer Value :  ");
  scanf("%d", &Integer);
  
  printf(" Please Enter Float Value :  ");
  scanf("%f", &InputFloat);    
  
  printf(" \n The Integer Value that you Entered is :  %d", Integer);
  printf(" \n The Character that you Entered is :  %c", Character);
  printf(" \n The Float Value that you Entered is :  %f", InputFloat);
  printf(" \n The Float Value with precision 2 is :  %.2f", InputFloat);

}

/* Please Enter a Character :  q
 Please Enter an Integer Value :  4
 Please Enter Float Value :  12

 The Integer Value that you Entered is :  4
 The Character that you Entered is :  q
 The Float Value that you Entered is :  12.000000
 The Float Value with precision 2 is :  12.00
*/
