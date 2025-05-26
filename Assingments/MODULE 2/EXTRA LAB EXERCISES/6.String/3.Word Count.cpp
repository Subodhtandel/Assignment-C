/*
Write a C program that counts the number of words in a sentence entered by the user.
? Challenge: Modify the program to find the longest word in the sentence.
*/
#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200];
    int i=0,wordCount=0,maxLen=0,currLen=0;
    char longestWord[50],currentWord[50];

    printf("Enter a sentence: ");
    fgets(sentence,sizeof(sentence),stdin);

    while (sentence[i]!='\0') {
        if ((sentence[i]!=' ') && (sentence[i]!='\n')) {
            currentWord[currLen]=sentence[i];
            currLen++;
        } else {
            if (currLen>0) {
                currentWord[currLen]='\0';
                wordCount++;

                if (currLen>maxLen) {
                    maxLen=currLen;
                    strcpy(longestWord,currentWord);
                }
                currLen = 0;
            }
        }
        i++;
    }
    printf("\nTotal words: %d\n",wordCount);
    printf("Longest word: %s (Length: %d)\n",longestWord,maxLen);

}
/*
Enter a sentence: Tandel Subodh

Total words: 2
Longest word: Tandel (Length: 6)
*/
