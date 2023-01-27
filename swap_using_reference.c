/*  In call by reference we send the address of the arguments to the function parameters
resulting both inside and outside of the function, the values were change.
-> adress of the argument and parameter is same as the original address is passed to the function.   */

// WAP to swap two numbers using call by reference.

#include<stdio.h>

// function declaration
void swap(int *num1, int *num2);  // parameters

// main function
int main(){
    int num1, num2;
    printf("\nEnter 1st number: ");
    scanf("%d", &num1);
    printf("Enter 2nd number: ");
    scanf("%d", &num2);             // user input numbers
    printf("\nValue of numbers before swapping:-\nnum1 = %d\nnum2 = %d", num1, num2);
    swap(&num1, &num2);   // function call    // actual parameters(arguments)
    printf("\nValue of numbers after swapping outside the function:-\nnum1 = %d\nnum2 = %d", num1, num2);
    
    return 0;
}

// function defination
void swap(int *num1, int *num2) {     // formal parameters
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
    printf("\nAfter swapping value of numbers inside the function:-\nnum1 = %d\nnum2 = %d", *num1, *num2);
}