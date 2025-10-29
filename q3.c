#include<stdio.h>


int subtract(int num1, int num2){
    while(num2!=0){
        unsigned int borrow = (~num1) & num2;

        num1 = num1^num2;

        num2 = borrow << 1;
    }
    return num1;
}
int main(){
    int num1, num2;

    printf("Enter two numbers to subtract: ");
    scanf("%d %d", &num1, &num2);

    printf("The subtraction of the numbers is %d", subtract(num1, num2));
    return 0;
}