#include <stdio.h>

int main() {
    int choice;
    printf("1. Binary to Decimal\n2. Decimal to Binary\nEnter choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        int bin, dec = 0, base = 1, rem;
        printf("Enter binary: ");
        scanf("%d", &bin);

        while (bin > 0) {
            rem = bin % 10;
            dec += rem * base;
            base *= 2;
            bin /= 10;
        }
        printf("Decimal = %d", dec);
    } 
    else if (choice == 2) {
        int dec, bin[20], i = 0;
        printf("Enter decimal: ");
        scanf("%d", &dec);

        while (dec > 0) {
            bin[i++] = dec % 2;
            dec /= 2;
        }
        printf("Binary = ");
        for (i = i - 1; i >= 0; i--)
            printf("%d", bin[i]);
    } 
    else {
        printf("Invalid choiceoice");
    }

    return 0;
}
