/* Write a C program to input basic salary of an employee
And calculate its gross salary according to following:
Basic Salary <= 10000 : HRA = 20% , DA= 80%
Basic Salary <= 20000 : HRA = 25% , DA = 90%
Basic Salary > 20000 : HRA = 30% , DA = 95% */

#include<stdio.h>
int main()
{
    float BasicSal,HRA,DA,Gross;
    printf("Enter the Basic Salary of the Employee\n");
    scanf("%f", &BasicSal);
    if(BasicSal<=10000)
    {
        HRA = BasicSal *0.2;
        DA = BasicSal * 0.3;
    }
    else if(BasicSal<=20000)
    {
        HRA = BasicSal * 0.25;
        DA = BasicSal * 0.9;
    }
    else
    {
        HRA = BasicSal * 0.3;
        DA = BasicSal * 0.95;
    }
    Gross = BasicSal + HRA + DA;
    printf("The required Gross Salary is %.2f", Gross);
    
    return 0;
}