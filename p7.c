#include <stdio.h>

int main() {
    int rows = 9;
    int i, j;

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", (rows - i + 1) * (rows - i + 1));
        }
        printf("\n");
    }

    return 0;
}

