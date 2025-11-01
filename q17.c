#include <stdio.h>

int main() {
    int arr[100], n, i, choice, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("\nArray before deletion: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n1. Front  2. Middle  3. End: ");
    scanf("%d", &choice);

    if(choice == 1) pos = 0;
    else if(choice == 2) pos = n / 2;
    else if(choice == 3) pos = n - 1;
    else {
        printf("Invalid choice!");
        return 0;
    }

    for(i = pos; i < n - 1; i++)
        arr[i] = arr[i + 1];
    n--;

    printf("\nArray after deletion: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
