#include<stdio.h>
#include<math.h>
int main(){
    // int a = 1.999999;
    // Error: implicit conversion from 'double' to 'int' is not possible.
    // big value can't be stored in a small container.

    // Explicit conversion:-
    int a = (int) 1.999999;
    printf("%d \n", a);
    return 0;
}