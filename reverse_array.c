// Write a function to reverse an array
/*  Any change in array inside another function also reflects inside main function
as it comes under call by reference. (array is a pointer)    */

#include<stdio.h>

// function protoype
void reverse(int arr[], int n);

int main() {
    int n;
    printf("Enter the array size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements:-\n");
    for(int i=0; i<n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    reverse(arr, n);    // function call
    return 0;
}

// function defination
void reverse(int arr[], int n) {
    for(int i=0; i<n/2; i++) {
        int firstValue = arr[i];
        int secondValue = arr[n-i-1];
        arr[i] = secondValue;
        arr[n-i-1] = firstValue;
    }
    printf("Reverse array is:-");
    for(int i=0; i<n; i++) {
        printf("\narr[%d] = %d ", i, arr[i]);
    }
}