/* Using 'switch' and 'case statement' WAP determine whether the number we key in is
	odd or even and that print out adjacent '*' sign same as that number.
    (Example: For number 6, we will print out ******).  */

#include<stdio.h>
int main()
{
	int number;
	printf("Enter the integer: ");
	scanf("%d",&number);

	if(number % 2 == 0)
		printf("%d is even\n",number);
	else
		printf("%d is odd\n",number);

	switch(number)
	{
	case 1:
		printf("*\n");
		break;
	case 2:
		printf("**\n");
		break;
	case 3:
		printf("***\n");
		break;
	case 4:
		printf("****\n");
		break;
	case 5:
		printf("*****\n");
		break;
	defult:
		printf("[WARNING]: Invalid Input!!!\n");
		break;
    }
	return 0;
}  