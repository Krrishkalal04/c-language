#include <stdio.h>

int reverse(int num) {
    int reversed = 0;

    reversed += (num % 10) * 100;   
    num /= 10;
    reversed += (num % 10) * 10;    
    num /= 10;
    reversed += num;                

    return reversed;
}

int main() {
    int number;

    printf("Enter a 3-digit number: ");
    scanf("%d", &number);

    if (number >= 100 && number <= 999) {
        int reversed_number = reverse(number);
        printf("Reversed number: %d\n", reversed_number);
    } else {
        printf("Please enter a 3-digit number.\n");
    }

    return 0;
}