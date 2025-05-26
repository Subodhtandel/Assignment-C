/*
? Write a C program that takes a number as input and checks whether it is a palindrome using
a function.
? Challenge: Modify the program to check if a given string is a palindrome.
*/
#include <stdio.h>
int stringLength(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}
char toLowerChar(char ch) {
    if (ch >= 'A' && ch <= 'Z')
        return ch + 32;
    return ch;
}
int isAlphaNumeric(char ch) {
    if ((ch >= 'A' && ch <= 'Z') || 
        (ch >= 'a' && ch <= 'z') ||
        (ch >= '0' && ch <= '9'))
        return 1;
    return 0;
}
int isStringPalindrome(char str[]) {
    int left = 0;
    int right = stringLength(str) - 1;
    while (left < right) {
        while (!isAlphaNumeric(str[left]) && left < right) left++;
        while (!isAlphaNumeric(str[right]) && left < right) right--;

        if (toLowerChar(str[left]) != toLowerChar(str[right]))
            return 0;
        left++;
        right--;
    }
    return 1;
}
int isNumberPalindrome(int num) {
    int original = num, reverse = 0, digit;
    if (num < 0) return 0;
    while (num != 0) {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num /= 10;
    }
    return (original == reverse);
}
int main() {
    int num;
    char str[100];
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (isNumberPalindrome(num))
        printf("%d is a palindrome number.\n", num);
    else
        printf("%d is not a palindrome number.\n", num);
    getchar();
    printf("Enter a string: ");
    int i = 0;
    char ch;
    while ((ch = getchar()) != '\n' && i < 99) {
        str[i++] = ch;
    }
    str[i] = '\0';
    if (isStringPalindrome(str))
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

}

