// WAP to check if a number is prime or not.
#include<stdio.h>
#include<math.h>
int main(){
    int num, flag = 1;
    printf("\nEnter a number: ");
    scanf("%d", &num);
    // prime number is only divisible by 1 and itself.
    for(int i=2; i<sqrt(num); i++) {            
        if( num % i == 0) {
            flag = 0;                      // flag == 0 (false i.e. not prime)
            break;                         // flag == 1 (true i.e. is prime) 
        }
    }  // sqrt is taken becoz a factor of a number can't be greter than sqrt of that number.
    if(num <= 1) {
        flag = 0;
    }
    if(flag == 1) {
        printf("It is a prime number.");
    }
    else {
        printf("It is not a prime number.");
    }
    return 0;
}