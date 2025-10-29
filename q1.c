#include<stdio.h>

int main(){
    int number, temp, k, sum = 0;

    printf("Enter your number: ");
    scanf("%d", &number);

    temp = number;

    while(temp!=0){
        k = temp%10;
        sum = sum + (k*k*k);
        temp = temp/10;
    }

    if(sum==number){
        printf("Given number is an Armstrong number");
    }
    else{
        printf("Not an Armstrong Number");
    }
    return 0;
}