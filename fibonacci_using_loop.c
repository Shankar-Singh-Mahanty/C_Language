// WAP to print the n terms of the fibonacci sequence using loop.
#include<stdio.h>
int main(){
    int num, n1=0, n2=1, n3;
    printf("\nEnter the number of terms: ");
    scanf("%d", &num);
    printf("The fibonacci series of %d terms is:-\n%d \t%d \t",num, n1, n2);   // printing 0 & 1
//  Based on 0 indexing i.e. counting starts from zero like an array
    for(int i = 2; i < num; i++) {  // loop stars from 2nd term as 0th & 1st is already printed.
        n3 = n1 + n2;
        printf("%d \t", n3);
        n1 = n2;
        n2 = n3;
    }
    return 0;
}

// * OR *

// WAP to store the first n fibonacci numbers using loop.
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter n (n>1): ");
//     scanf("%d", &n);

//     printf("The fibonacci series of n terms is:-\n");
//     int fib[n];
//     fib[0] = 0;
//     fib[1] = 1;
//     for(int i = 2; i < n; i++) {
//         fib[i] = fib[i-1] + fib[i-2];   // important
//         printf("%d \t", fib[i]);    // first two terms are 0 , 1
//     }
//     return 0;
// }