// WAP to find the factorial of a number.
#include<stdio.h>
int main() {
    int num ;
    printf("\nEnter a number: ");
    scanf("%d", &num);
    int fact = 1;
    for(int i=1; i<=num; i++) {
        fact = fact * i;
    }
    printf("Factorial of the number is: %d! = %d", num , fact);
    return 0;
}

/* REMARK:- it work only for small numbers as int data type is unable to store large values.
so if you still enter a large number like 50 it will show zero as output as it exceeds the capacity of int container. */