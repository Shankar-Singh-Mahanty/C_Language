// Write a function to count the number of odd numbers in an array.

#include<stdio.h>

int countOdd(int arr[], int n);

int main() {
    int arr[8];
    printf("Enter the array elements:-");
    for(int i=0; i<8; i++) {
        printf("\narr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    printf("Total number of odd numbers in the array: %d", countOdd(arr, 8));
    return 0;
}

int countOdd(int arr[], int n) {
    int count = 0;
    for(int i=0; i<=n; i++) {
        if(arr[i] % 2 != 0) {   // odd
            count++;
        }
    }
    return count;
}