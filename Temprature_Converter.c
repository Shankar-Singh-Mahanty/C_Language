// wap to convert temperature units
#include<stdio.h>
int main()
{
    float celsius, fahrenheit, kelvin;
    printf("\nEnter the C temperture you want to convert: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * (9.0 / 5.0)) + 32;
    kelvin = (celsius + 273.15);
    printf("The value of this C temperature in fahrenheit is: %f F\n", fahrenheit);
    printf("The value of this C temperature in kelvin is: %f K\n", kelvin);

    return 0;
}