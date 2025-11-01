#include<stdio.h>

int main(){
    int n, i, j;

    printf("Enter size of array: ");
    scanf("%d", &n);

    if(n<=0){
        printf("Invalid array size!");
        return 0;
    }

    int arr[n];

    printf("Enter %d elements: ", n);
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }

    int found = 0;

    printf("Duplicate elements are: ");
    for(i=0;i<n;i++){
        for(j=i+1; j<n;j++){
            if(arr[i]==arr[j]){
                printf("%d ", arr[i]);
            found = 1;
            break;
        }
    }
    }
    if(found==0){
        printf("-1");
    }
    return 0;
}
