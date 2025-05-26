/*Write a C program that accepts two 2x2 matrices from the user and adds them. Display the
resultant matrix.
? Challenge: Extend the program to work with 3x3 matrices and matrix multiplication.
*/
#include<stdio.h>
int main(){
	int arr1[2][2],arr2[2][2],c[2][2],i,j,sum[2][2];

    printf("Enter elements of first 2*2 matrix:\n");
    for(i=0; i<2; i++) {
        for(j=0; j<2; j++) {
            printf("arr1[%d][%d]: ",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }

    printf("Enter elements of second 2*2 matrix:\n");
    for(i=0; i<2; i++) {
        for(j=0; j<2; j++) {
            printf("arr2[%d][%d]: ",i,j);
            scanf("%d",&arr2[i][j]);
        }
    }
    for(i=0; i<2; i++){
    	for(j=0; j<2; j++){
    		sum[i][j]=arr1[i][j]+arr2[i][j];
		}
	}
		printf("\nResultant addition:\n");
    for(i=0; i<2; i++) {
        for(j=0; j<2; j++) {
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }




//3*3 matrix

#include<stdio.h>
{
	int arr1[3][3],arr2[3][3],c[3][3],sum[3][3];
	int i,j,k;

    printf("Enter elements of first 3*3 matrix:\n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("arr1[%d][%d]: ",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }

    printf("Enter elements of second 3*3 matrix:\n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("arr2[%d][%d]: ",i,j);
            scanf("%d",&arr2[i][j]);
        }
    }
    for(i=0; i<3; i++){
    	for(j=0; j<3; j++){
    		sum[i][j]=arr1[i][j]+arr2[i][j];
		}
	}
        for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            c[i][j] = 0;
            for(k=0; k<3; k++) {
                c[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
    }
    	printf("\nResultant addition:\n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
    printf("\nProduct matrices:\n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}
}
/*
Enter elements of first 2*2 matrix:
arr1[0][0]: 5
arr1[0][1]: 6
arr1[1][0]: 7
arr1[1][1]: 8
Enter elements of second 2*2 matrix:
arr2[0][0]: 24
arr2[0][1]: 5
arr2[1][0]: 5
arr2[1][1]: 4

Resultant addition:
29      11
12      12
Enter elements of first 3*3 matrix:
arr1[0][0]: 8
arr1[0][1]: 2
arr1[0][2]: 8
arr1[1][0]: 1
arr1[1][1]: 5
arr1[1][2]: 2
arr1[2][0]: 4
arr1[2][1]: 6
arr1[2][2]: 7
Enter elements of second 3*3 matrix:
arr2[0][0]: 8
arr2[0][1]: 3
arr2[0][2]: 4
arr2[1][0]: 5
arr2[1][1]: 6
arr2[1][2]: 3
arr2[2][0]: 5
arr2[2][1]: 6
arr2[2][2]: 3

Resultant addition:
16      5       12
6       11      5
9       12      10

Product matrices:
114     84      62
43      45      25
97      90      55
*/

