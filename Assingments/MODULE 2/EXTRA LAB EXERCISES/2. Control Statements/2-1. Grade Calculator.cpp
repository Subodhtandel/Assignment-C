/*Write a C program that takes the marks of a student as input and displays the corresponding
grade based on the following conditions:
o Marks > 90: Grade A
o Marks > 75 and <= 90: Grade B
o Marks > 50 and <= 75: Grade C
o Marks <= 50: Grade D
? Use if-else or switch statements for the decision-making process.
*/
#include<stdio.h>
int main(){
	int roll_no;
    char name[50];
    float marks1, marks2, marks3;
    float total, percentage;

    printf("Enter roll number: ");
    scanf("%d", &roll_no);

    printf("Enter name: ");
    scanf(" %[^\n]", name);  

    printf("\n Enter marks of first subjects:");
    scanf("%f", &marks1);
    
    printf("\n Enter marks of second subjects:");
    scanf("%f",&marks2);
    
    printf("\n Enter marks of three subjects:");
    scanf("%f",&marks3);

    
    total = marks1 + marks2 + marks3;
    percentage = (total / 300) * 100;

   
    printf("\n--- Student Report ---\n");
    printf("\n Roll No: %d", roll_no);
    printf("\n Name: %s", name);
    printf("\n Total Marks: %.2f", total);
    printf("\n Percentage: %.2f%%", percentage);

   
    if (percentage > 90) {
        printf("\n Grade A");
    } else if (percentage >75 <=90) {
        printf("\n Grade B");
    } else if (percentage >50 <=75) {
        printf("\n Grade c");
    }else if (percentage <=50){
        printf("\n Grade D");
    } else {
        printf("\n Division: Fail");
    }

}

