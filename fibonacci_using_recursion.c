// write a function to print the nth term of the fibonacci sequence.

#include<stdio.h>

// function declaration
int fibo(int n);

int main() {
    int num;
    printf("\nEnter the nth term: ");
    scanf("%d", &num);
    printf("The %dth term of fibonacci series is: %d", num, fibo(num));
    return 0;
}

// recursive function
int fibo(int n) {
        if(n == 0){
            return 0;          
        }                    // base case
        if(n == 1){
            return 1;
        }

/*  we can also write the base case as
        if(n <= 1) {
            return n;
        }
and the function defination as
        return fibo(n-1) + fibo(n-2)    */
    int fiboNm1 = fibo(n-1);
    int fiboNm2 = fibo(n-2);
    int fiboN = fiboNm1 + fiboNm2;
    return fiboN;
}