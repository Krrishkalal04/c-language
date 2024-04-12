#include <stdio.h>

int main() {
    int num;
    char ch;

    printf("Enter a number: ");
    scanf("%d", &num);

    switch (num > 0) {
        case 1:
            printf("%d is a positive number.\n", num);
            break;
        case 0:
            printf("%d is not a positive number.\n", num);
            break;
    }

    printf("Enter an alphabet: ");
    scanf(" %c", &ch); 

    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("%c is a vowel.\n", ch);
            break;
        default:
            printf("%c is a consonant.\n", ch);
    }

    return 0;
}
