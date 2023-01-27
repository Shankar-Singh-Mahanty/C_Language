// WAP for taking inputs from the user until an odd number is encoutered.
#include<stdio.h>
int main() {
    int n;
    do{
        printf("\nEnter a number: ");
        scanf("%d", &n);

        if(n % 2 != 0) {
            break;
        }
    } while (1);
    printf("Thank You!");

    return 0;
}