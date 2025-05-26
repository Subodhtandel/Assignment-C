/*Write a C program that takes two strings from the user and concatenates them
using strcat(). Display the concatenated string and its length using
strlen().
*/
#include<stdio.h>
#include<string.h>
int main(){
	char str1[50],str2[50];
	printf("\n Enter the first string: ");
	scanf("%s", str1);
	
	printf("\n Enter the second string: ");
	scanf("%s", str2);
	
		strcat(str1, str2);
	
	printf("\nConcatenated string: %s", str1);
    printf("\nLength: %d", strlen(str1));

}
/*
 Enter the first string: Hello

 Enter the second string: World
Concatenated string: HelloWorld
Length: 10
*/
