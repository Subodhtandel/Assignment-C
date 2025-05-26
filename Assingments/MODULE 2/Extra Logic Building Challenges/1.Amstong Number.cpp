#include <stdio.h>
int main() {
    int number, temp, digit, sum = 0, count = 0, i;
    printf("Enter a number: ");
    scanf("%d", &number);
    temp = number;
    count = 0;
    int tempCount = temp;
    while (tempCount != 0) {
        count++;
        tempCount /= 10;
    }
    temp = number;
    sum = 0;
    while (temp != 0) {
        digit = temp % 10;
        int power = 1;
        for (int j = 0; j < count; j++) {
            power *= digit;
        }
        sum += power;
        temp /= 10;
    }
    if (sum == number)
        printf("%d is an Armstrong number.\n", number);
    else
        printf("%d is not an Armstrong number.\n", number);
    printf("\nArmstrong numbers between 1 and 1000:\n");
    for (i = 1; i <= 1000; i++) {
        temp = i;
        count = 0;
        int tempCount2 = temp;
        while (tempCount2 != 0) {
            count++;
            tempCount2 /= 10;
        }
        temp = i;
        sum = 0;
        while (temp != 0) {
            digit = temp % 10;
            int power = 1;
            for (int j = 0; j < count; j++) {
                power *= digit;
            }
            sum += power;
            temp /= 10;
        }
        if (sum == i)
            printf("%d ", i);
    }
    printf("\n");
}

