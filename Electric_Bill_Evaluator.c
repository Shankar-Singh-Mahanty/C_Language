/*Write a C program to input electricity unit charges and calculate total electricity bill,
according to the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For units above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill.*/

#include<stdio.h>
int main()
{
	int Units;
	float Bill, Total_Bill;
	printf("Enter the Units consumed by the customer\n");
	scanf("%d", &Units);
	if(Units>0 && Units<= 50)
	Bill = Units * 0.5;
	else if(Units>50 && Units<=150)
	Bill = (Units-50)*0.75 + 25;
	else if(Units>150 && Units<=250)
	Bill = (Units-150)*1.2 + 25 + 75;
	else if(Units>250)
	Bill = ((Units-250)*1.5) + 25 + 75 + 125;
	Total_Bill = Bill + (0.2*Bill);
	printf("\nThe Total Bill of the consumer is Rs. %.2f", Total_Bill);
	
	return 0;
}
