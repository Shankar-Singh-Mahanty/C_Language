#include<stdio.h>

int main() {
    int arr[5];

    // input
    int *ptr = &arr[0];  // arr = &arr[0]    -> array is a pointer
    for(int i = 0; i < 5; i++) {
        printf("a[%d] = ", i);
        scanf("%d", (ptr+i));   // ptr+i = &arr[i]
    }

    // output
    printf("Array is:-\n");
    for(int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, *(ptr+i));    // *(ptr+i) = arr[i]
    }
    return 0;
}
