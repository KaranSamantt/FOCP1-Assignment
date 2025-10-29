#include<stdio.h>
// SOLVED USING ITERATIVE METHOD
int main(){
    int num1, num2, hcf;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    while(num1!=num2){
        if(num1>num2){
            num1 = num1 - num2;
        }
        else{
            num2 = num2 - num1;
        }
    }
    hcf = num1;

    printf("HCF : %d ", hcf);
    return 0;
}

// USING RECURSIVE:
/*
#include <stdio.h>

int hcf(int num1, int num2){
if(num2==0){
return num1;
}
else{
return hcf(num2, num1%num2);}
}

int main(){

int num1, num2;

printf("Enter number 1 and number 2: ");
scanf("%d %d", &num1, &num2);

printf("HCF: %d", hcf(num1, num2));

return 0;

}
*/