// WAP to print all the prime numbers in a given range.
#include<stdio.h>
#include<math.h>

int main(){
    int low, high, flag = 1;
    printf("\nEnter the begining of the range: ");
    scanf("%d", &low);
    printf("Enter the ending of the range: ");
    scanf("%d", &high);
    printf("\nPrime numbers between %d and %d are: ", low, high);
    
    // iteration until low is not eqaul to high
    while(low < high) {
        flag = 1;
        // ignore numbers less than 2
        if(low <= 1){
            low++;
            continue;
        }
        // if low is not a prime number flag will be 0
        for(int i =2; i <= sqrt(low); i++) {
            if(low % i == 0) {
                flag = 0;
                break;
            }
        }
        if(flag == 1){
            printf("%d\t", low);
        }
        //to check prime for next number
        // increse low by 1
        low++;
    }
    return 0;
}