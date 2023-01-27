/*Write a program that asks the users to enter two integers, obtain the numbers from the user,
then prints the larger number followed by the words"is larger." If the numbers are equal,
then print the message "These numbers are equal."
Use only the single-selection form of the if statement. */

#include<stdio.h>
int main()
{
	int num1, num2;
	printf("Enter the first integer\n");
	scanf("%d", &num1);
	printf("Enter the second integer\n");
	scanf("%d", &num2);
	if(num1>num2)
		printf("%d is Larger\n", num1);
	else if(num1<num2)
		printf("%d is Larger\n", num2);
	else
	printf("Entered integers are equal !!!\n");
	
	return 0;
}
