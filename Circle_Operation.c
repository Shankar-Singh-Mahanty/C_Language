// WAP to find the area and permiter of a circle
#include<stdio.h>
#include<math.h>        // for power

int main(){
    float radius;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    printf("\nThe circumference of the circle is: %.2f", 2 * 3.14 * radius);
    printf("\nThe area of the circle is: %.2f", 3.14 * pow(radius,2));
    return 0;
}