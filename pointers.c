//  Write a function to calculate the sum, product & average of 2 numbers. Print all that in main function.
/* As we know a function can return only a single value so to return 3 values from one function
we have to take the help of pointers.       */

#include<stdio.h>
//  function declaration
void doWork(int a, int b, int *sum, int *prod, int *avg);

int main() {
    int a = 5, b = 7;
    int sum, prod, avg;
    doWork(a, b, &sum, &prod, &avg);    //  function call (by reference)
    printf("Sum = %d, Prod = %d, Avg = %d", sum, prod, avg);

    return 0;
}

// function defination
void doWork(int a, int b, int *sum, int *prod, int *avg) {
    *sum = a + b;
    *prod = a * b;
    *avg = (a+b) / 2;
}