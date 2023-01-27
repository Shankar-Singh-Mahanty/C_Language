/*  changes to PARAMETERS(values in function declaration and defination) in a function doesn't change
the ARGUMENT(values that are passed in function call) because a copy of the argument is passed to the function  */

#include<stdio.h>
// function declaration / prototype
void CalculatePrice(float value);   // parameter

int main() {
    float value = 100.0;
    // function call
    CalculatePrice(value);      // argument / actual parameter :- used to send values
    printf("\nValue is: %f", value);
    return 0;
}
// function defination
void CalculatePrice(float value) {      // parameter / formal parameter  :- used to receive values
    value = value + (0.18 * value);
    printf("Final value is: %f", value);
}