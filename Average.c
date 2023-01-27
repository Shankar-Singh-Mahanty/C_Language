// WAP to find the average of three numbers
#include<stdio.h>
int main(){
    int num1, num2, num3;
    printf("Enter the num1: ");
    scanf("%d",&num1);
    printf("Enter the num2: ");
    scanf("%d",&num2);
    printf("Enter the num3: ");    
    scanf("%d",&num3);
    printf("The average is: %d", (num1+num2+num3)/3);
    return 0;
}