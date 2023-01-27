/*  -> Recursion is a phenomenon in which a functon calls itself.
    -> iteration has infinite loops and recursion has stack overflow.
    -> anything that can be done with iteration, that can also be done with recursion and vice-versa.
    -> base case is the condition which stops recursion.       */

// WAP to calculae the sum of 'n' natural numbers using recursion.
#include<stdio.h>
// function declaration
int sum(int n);

int main() {
    int num;
    printf("\nEnter a number: ");
    scanf("%d", &num);
    printf("Sum is: %d", sum(num));
    return 0;
}
// recursive function
int sum(int n) {
    if ( n == 1){         // base case
        return 1;
    }
    // sum of 1 to n
    int sumNm1 = sum(n-1);
    int sumN = sumNm1 + n;
    return sumN;
}