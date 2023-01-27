// WAP to demonstrate increment operator
#include<stdio.h>
int main(){
    // increment operator
    printf("post \n");
    int i = 1, j =1;
    printf("%d \n", i++); // use, then increse
    printf("%d \n",i);  // inside the compiler wo increse hoke tha !

    printf("pre \n");
    printf("%d \n", ++j);  // increse, then use
    printf("%d \n", j);
    return 0;
}