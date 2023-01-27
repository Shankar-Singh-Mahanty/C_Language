// WAP to Check the number is even or not.
#include<stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    // In C language 1 = True , 0 = False
    // Even -> 1
    // Odd -> 0
    printf("%d", num % 2 == 0);
    return 0;
}