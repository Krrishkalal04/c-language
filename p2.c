#include <stdio.h>

int main() {
    int array[100], size, i;
    int smallest;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    smallest = array[0];

    for (i = 1; i < size; i++) {
        if (array[i] < smallest) {
            smallest = array[i];
        }
    }

    printf("The smallest element in the array is: %d\n", smallest);

    return 0;
}

