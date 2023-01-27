// create a string firstname & lastname to store details of user & print all the characters using loop.
/*  unlike a character array the string posses a null character('\0) at last
which represents the end of the string ; and as we were able to know the end of the string we do not need to provide
the size of the string array which we previously required during intialization of an array   */

#include<stdio.h>

// function declaration
void printString(char arr[]);

int main() {
    char firstname[] = "Shankar";
    char middlename[] = {'S', 'i', 'n', 'g', 'h', '\0'};   // can also be represented as:- char middlename = "Singh";
    char lastname[] = "Mahanty";

    //  function calls
    printString(firstname);
    printString(middlename);
    printString(lastname);

    printf("Your name is: %s %s %s", firstname, middlename, lastname);
    return 0;
}

//  function defination
void printString(char arr[]) {
    for(int i = 0; arr[i] != '\0'; i++) {
        printf("%c", arr[i]);
    }
    printf("\n");
}

// %c is used to print a string character by character whereas %s to print the entire string at once.
// during scanning of a string it is not mandotory to put an ampersand(&) as an array is a pointer.
// we can simply print this by line 11 no need to crete function.
//  when we use %s we do not need to put '\0' it automatically understands it.