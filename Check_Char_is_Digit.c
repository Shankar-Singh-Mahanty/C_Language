#include<stdio.h>
int main(){
    // true -> 1
    // false -> 0
    char ch;
    printf("Enter the character: ");
    scanf("%c", &ch);
    printf("%d", ch>='0' && ch<='9');
    return 0;
}