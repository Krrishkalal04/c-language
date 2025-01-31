#include <stdio.h>

struct House {
    int room_quantity;
    int established_year;
    char city[50];
};

int main() {
    int N;
    printf("Enter the number of houses: ");
    scanf("%d", &N);

    struct House houses[N];

    for (int i = 0; i < N; i++) {
        printf("\nEnter details for house %d:\n", i + 1);
        printf("Room quantity: ");
        scanf("%d", &houses[i].room_quantity);
        printf("Established year: ");
        scanf("%d", &houses[i].established_year);
        printf("City: ");
        scanf("%s", houses[i].city);
    }

    printf("\nHouse details:\n");
    for (int i = 0; i < N; i++) {
        printf("\nHouse %d:\n", i + 1);
        printf("Room quantity: %d\n", houses[i].room_quantity);
        printf("Established year: %d\n", houses[i].established_year);
        printf("City: %s\n", houses[i].city);
    }

    return 0;
}






