/*  In call by value we send a copy of the argument values to the function parameters
resulting change in values happen inside the function only.
-> copied Address is different than original values address as a new memory block is created 
for copied value then the value at the new memoery block that is copied value is send to the function       */

// WAP to swap two numbers using call by value.

#include<stdio.h>

// function declaration
void swap(int num1, int num2);  // parameters

// main function
int main(){
    int num1, num2;
    printf("\nEnter 1st number: ");
    scanf("%d", &num1);
    printf("Enter 2nd number: ");
    scanf("%d", &num2);             // user input numbers
    printf("\nValue of numbers before swapping:-\nnum1 = %d\nnum2 = %d", num1, num2);
    swap(num1, num2);   // function call    // actual parameters(arguments)
    printf("Adress of the arguments or original value:-\nnum1 = %u\nnum2 = %u\n", &num1, &num2);
    printf("\nValue of numbers after swapping outside the function:-\nnum1 = %d\nnum2 = %d", num1, num2);
    
    return 0;
}

// function defination
void swap(int num1, int num2) {     // formal parameters
    int temp = num1;
    num1 = num2;
    num2 = temp;
    printf("\nAfter swapping value of numbers inside the function:-\nnum1 = %d\nnum2 = %d", num1, num2);
    printf("\nAdress of the parameters or copied value:-\nnum1 = %u\nnum2 = %u\n", &num1, &num2);
}