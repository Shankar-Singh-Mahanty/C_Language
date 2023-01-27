// WAP to show all arithimetic operations
#include<stdio.h>
int main()
{
	float num1, num2;
// Modular division operator '%' returns the reminder and cannot be applied on float.
	printf("Enter Two Numbers:\n");
	scanf("%f %f",&num1, &num2);
	
	float add = num1 + num2;
	float sub = num1 - num2;
	float mul = num1 * num2;
	float div = num1 / num2;
	// float mod = num1 % num2;
	
	printf("The Result of Addition is: %.2f\n", add);
	printf("The Result Of subtraction is: %.2f\n", sub);
	printf("The Result of Multiplication is: %.2f\n", mul);
	printf("The Result of Division is: %.2f\n", div);
	// printf("The Result of modulous is: %d\n", mod);
		
	return 0;
}
