/* Ternary operator is used to 
   shorten the multiple lines if else statement into single line. */

#include<stdio.h>
int main(){
    int age;
    // int num;
    printf("Enter your age: ");
    // printf("Enter the number: ");
    scanf("%d",&age);
    // scanf("%d",&num);

    age >=18 ? printf("You can Vote!") : printf("You can't Vote!");
    // num % 2 == 0 ? printf("%d is Even", num) :  printf("%d is Odd", num);

    return 0;
}