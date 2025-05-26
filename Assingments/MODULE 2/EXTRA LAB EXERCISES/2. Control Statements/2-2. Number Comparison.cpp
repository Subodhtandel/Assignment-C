#include <stdio.h>

int main() {
    int num1, num2, num3, largest, smallest;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 >= num2 && num1 >= num3) {
        largest = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        largest = num2;
    } else {
        largest = num3;
    }

    if (num1 <= num2 && num1 <= num3) {
        smallest = num1;
    } else if (num2 <= num1 && num2 <= num3) {
        smallest = num2;
    } else {
        smallest = num3;
    }

    switch (largest) {
        case num1:
            printf("Largest number (if-else): %d\n", num1);
            break;
        case num2:
            printf("Largest number (if-else): %d\n", num2);
            break;
        case num3:
            printf("Largest number (if-else): %d\n", num3);
            break;
    }

    switch (smallest) {
        case num1:
            printf("Smallest number (if-else): %d\n", num1);
            break;
        case num2:
            printf("Smallest number (if-else): %d\n", num2);
            break;
        case num3:
            printf("Smallest number (if-else): %d\n", num3);
            break;
    }

    printf("Largest number (if-else): %d\n", largest);
    printf("Smallest number (if-else): %d\n", smallest);

}
