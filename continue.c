// WAP to print all the odd numbers from 5 to 50.

#include<stdio.h>
int main() {
    for(int i=5; i<=50; i++) {
        if(i % 2 == 0) {
            continue;
        }
        else {
            printf("%d,\t" , i);
        }
    }
    return 0;
}