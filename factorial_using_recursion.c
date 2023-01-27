/*  -> Recursion is a phenomenon in which a functon calls itself.
    -> iteration has infinite loops and recursion has stack overflow.
    -> anything that can be done with iteration, that can also be done with recursion and vice-versa.
    -> base case is the condition which stops recursion.       */

//  WAP to calculate the factorial of a number using recursion.
#include<stdio.h>
// function declaration
int fact (int n);

int main() {
    int num;
    printf("\nEnter a number: ");
    scanf("%d", &num);
    printf("Factorial of %d is: %d! = %d", num, num, fact(num));
    return 0;
}
// recursive function
int fact(int n) {       
    if (n == 1){        // base case (1!)
        return 1;
    }
    // factorial of n
    int factNm1 = fact(n-1);
    int factN = factNm1 * n;
    return factN;
}