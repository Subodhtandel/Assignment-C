/*Write a C program to create a file, write a string into it, close the file, 
then open the file again to read and display its contents.
*/
#include<stdio.h>
main(){
	FILE *fp;
	char str[30];
	char ch;
	fp = fopen("example.txt", "w");
    fprintf(fp, "%s", str);
    fclose(fp);
	
	fp = fopen("example.txt", "r");
    printf("\n Contents of the file:%d");
    
    ch = fgetc(fp);
    printf("%c", ch);

    ch = fgetc(fp);
    printf("%c", ch);

    ch = fgetc(fp);
    printf("%c", ch);

    ch = fgetc(fp);
    printf("%c", ch);
    fclose(fp);
}
// Contents of the file: 
