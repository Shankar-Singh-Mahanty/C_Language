/*  ->  pointer can be incremented and decremented
    (ptr++ and ptr-- but here pointer doesn't increse or decrese by 1,
It increse and decrese by the size of the data type like in case of int or float by 4 and in case of char by 1) */

/*We can also subtract two pointers of 'same data type' from each other e.g. int *ptr1 = 123456 & int *ptr2 = 123460 ;
ptr2 - ptr1 = 1 (4 will not be the answer) as it shows number of data type difference not number of bytes    */

// we can also make comparison between two pointers (true = 1 ; false = 0)

#include<stdio.h>
int main(){

    // increment and decrement
    int age = 20;
    int *ptr = &age;
    printf("%u\n", ptr);
    ptr++;          // incresed by 4 as integer data type
    printf("%u\n", ptr);
    ptr--;          // decresed by 4bytes
    printf("%u\n", ptr);
    printf("==============================\n");
    //  substraction and comparison
    float price = 100.0;
    float *ptr_ = &price;
    float _price = 250.0;       // float = 4bytes
    float *_ptr = &_price;

    printf("%u, %u :- Difference = %u\n",ptr_, _ptr, ptr_ - _ptr);  // number of data types
    float *_ptr_ = &price;
    printf("Comparison = %u\n", ptr_ == _ptr_);     // true = 1
    return 0;
}