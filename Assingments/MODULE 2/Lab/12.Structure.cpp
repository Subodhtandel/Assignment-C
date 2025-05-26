/*Write a C program that defines a structure to store a student's details 
(name, roll number, and marks). Use an array of structures to store details of 3 students and print them. 
*/
#include<stdio.h>
struct User{
	char name[20];
	int marks;
	int unumber;  
};
main(){
	
	struct User u1;
	printf("\n enter student name, number, marks");
	scanf("%s %d %d",u1.name,&u1.unumber,&u1.marks);
	
	printf("\n student name=%s",u1.name);
	printf("\n roll number=%d",u1.unumber);
	printf("\n marks=%d",u1.marks);
	
	
	struct User u[3];
	int i;
	for(i=0;i<3;i++){
	printf("\n Enter %d user",i+1);
	printf("\n enter student name, number, marks");	
	scanf("%s %d %d",u[i].name,&u[i].unumber,&u[i].marks);
	}
	for(i=0;i<3;i++){
	printf("\n name=%s",u[i].name);
	printf("\n unumber=%d",u[i].unumber);
	printf("\n marks=%d",u[i].marks);
	}
}
/*

 enter student name, number, marksSUBODH
77
45

 student name=SUBODH
 roll number=77
 marks=45
 Enter 1 user
 enter student name, number, marksJOJO
198
67

 Enter 2 user
 enter student name, number, marksTIRTH
88
55

 Enter 3 user
 enter student name, number, marksrasul
90
11

 name=JOJO
 unumber=198
 marks=67
 name=TIRTH
 unumber=88
 marks=55
 name=rasul
 unumber=90
 marks=11


*/
