// Print the sum of first n natural numbers.
// also, print them in reverse.

#include<stdio.h>
/* Note:- i ko hamne dono loops mein use kiya hai tou kya compiler error dega ?
:- error nahi dega becoz i apne loop tak hi limited hota hai. if nest is there then different ittretor use karna padega. */
int main(){
    int n;
    printf("Enter the +ve number: ");
    scanf("%d", &n);

    int sum =0;
    for(int i=1; i<=n; i++){
        sum += i;  // sum = sum + i
    }
    printf("Sum is: %d\n",sum);
    
    for(int i=n; i>=1; i--){
        printf("%d\n", i);
    }
    return 0;
}

// OR

/*  we can do this in a single for loop 
by using multiple variables in a single for loop.

for(int i=1, j=n; i<=n && j>=1; i++, j--){
    sum += i;
    printf("%d\n", j);
}
printf("sum is: %d\n", sum);    */

/* && lagaya becoz dono condition true hain as jab tak 'i' 1 se lekar n tak jayega
tab tak 'j' n se lekar 1 tak aa chuka hoga. */

/* we con also remove 'i' completely as we know addition is commutative
1+2+3+4 = 4+3+2+1
so the loop will be

for(int j=n; j>=1; j--){
    sum +=j
    printf("%d\n", j);
}
printf("Sum is: %d\n", sum);      */