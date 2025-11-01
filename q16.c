#include<stdio.h>

int main(){
    int arr[100], n, i, choice, element, pos;

    printf("Enter no. of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: \n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Array before insertion: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n\nEnter element to insert: ");
    scanf("%d", &element);

    printf("1.Front 2.Middle 3.End");
    scanf("%d", &choice);

     if(choice == 1) pos = 0;
    else if(choice == 2) pos = n / 2;
    else pos = n;

    for(i = n; i > pos; i--)
        arr[i] = arr[i - 1];
    arr[pos] = element;
    n++;

    printf("\nArray after insertion: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);


    return 0;
}