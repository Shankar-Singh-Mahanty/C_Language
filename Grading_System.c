//WAP to display the grade of a student.

#include<stdio.h>
int main()
{
	int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);
    if(marks<0 || marks>100)
        printf("Wrong Entry");
    else if(marks>=90)
        printf("Grade O");
    else if(marks>=80 && marks<90)
        printf("Grade E");
    else if(marks>=70 && marks<80)
        printf("Grade A");
    else if(marks>=60 && marks<70)
        printf("Grade B");
    else if(marks>=50 && marks<60)
        printf("Grade C");
    else if(marks <50)
        printf("**FAIL**");
        
	return 0;
}