// Create a 2D array, storing the tables of 2 and 3.
/*  when we a pass a 2D array the 1st dimension is treated as pointer but the 2nd one is as an array.
thats why we need to provide the size of the 2nd one or else it throw an error.    */

#include<stdio.h>

// function declaration
void storetables(int arr[][10], int n, int m, int num);

int main() {
    int table[2][10];   // 2 row X 10 columns

    storetables(table, 0, 10, 2);   //  function call
    for(int i = 0; i < 10; i++) {
        printf("%d \t", table[0][i]);
        // table[0][0]  table[0][1]  table[0][2]  table[0][3] .... table[0][8]  table[0][9]
    }

    printf("\n===============================================================================\n");

    storetables(table, 1, 10, 3);   //  function call
    for(int i = 0; i < 10; i++) {
        printf("%d \t", table[1][i]);
        // table[1][0]  table[1][1]  table[1][2]  table[1][3] .... table[1][8]  table[1][9]
    }
    return 0;
}

//  function defination
void storetables(int arr[][10], int n, int m, int num) {
    for(int i = 0; i < m; i++) {
        arr[n][i] = num * (i + 1);  //  2   4   6   8...
    }
}