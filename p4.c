#include <stdio.h>

void squareArray(int *arr, int size) {
    
    for (int i = 0; i < size; i++) {
        
        *(arr + i) = (*(arr + i)) * (*(arr + i));
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    squareArray(arr, size);

    printf("Array after squaring each element: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}


