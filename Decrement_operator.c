// WAP to demonstrate decrement operator
#include<stdio.h>
int main(){
    // Decrement operator
    printf("post \n");
    int i = 1, j =1;
    printf("%d \n", i--); // use, then decrese
    printf("%d \n",i);  // inside the compiler wo decrese hoke tha !

    printf("pre \n");
    printf("%d \n", --j);  // decrese, then use
    printf("%d \n", j);
    return 0;
}