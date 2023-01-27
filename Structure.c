//  Structure is a collection of values of different data types and stores in contiguous memory location.
#include<stdio.h>
#include<string.h>

//  user defined
struct student {    // declaration
    int roll;
    float cgpa;
    char name[50];
};

int main() {
    struct student S1;
    S1.roll = 758;
    S1.cgpa = 9.5;
    // S1.name = "Shankar";  //direct declaration like this throws an error as expression must be a modifiable value.
    strcpy(S1.name, "Shankar");

/*  as we can't change the value in a string created through array we can only copy compare etc.
But if the string is dedlared using pointer we can modify or assign the value during the run time.   */

    printf("Student name: %s\n", S1.name);
    printf("Student roll no: %d\n", S1.roll);
    printf("CGPA scored: %f\n", S1.cgpa);

    // you can intialize the structure in a single line
    struct student S2 = { 760, 8.2, "Jyoti"};   // intilize in the same sequence as you declare inside the structure.
    printf("Student's name: %s\n", S2.name);
    
    //  Using pointers
    struct student *ptr = &S2;
    printf("Student's name: %s\n", (*ptr).name);
    printf("Student's name: %s\n", ptr -> name);    // different representation of pointer.

    struct student S3 = {0};    // this puts null value inside all data types (here:- int roll, float cgpa, char name)
    printf("CGPA scored: %f\n", S3.cgpa);

    return 0;
}