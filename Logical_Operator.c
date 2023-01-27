// WAP to demonstrate all logical operators
#include<stdio.h>
int main()
{
	int a,b;
    printf("Enter two Integers: ");
    scanf("%d %d", &a,&b);
	printf("Output = %d", a&b);
	printf("\nOutput = %d", a&&b);
	printf("\nOutput = %d", a|b);
	printf("\nOutput = %d", a||b);
	
    return 0;
}