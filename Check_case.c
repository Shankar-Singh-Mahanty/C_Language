// WAP to check the case of an alphabet
#include<stdio.h>
/* In C programming, a character variable holds an ASCII value.
    The ASCII value of the lowercase alphabet is from 97 to 122.and
    the ASCII value of the uppercase alphabet is from 65 to 90. and it also 
    goes on incresing like in case of a=97, b=98, c= 99  and in case of A=65, B=66, C=77 */

int main(){
    char ch;
    printf("\nEnter the character: ");
    scanf("%c", &ch);

    if(ch >= 'A' && ch<= 'Z'){
        printf("Upper case\n");
        printf("\nThe ASCII value of %c is = %.2d", ch , ch);
    }
    else if(ch>= 'a' && ch<= 'z'){
        printf("Lower case\n");
        printf("\nThe ASCII value of %c is = %d \n", ch , ch);
    }
    else{
        printf("Not an English Alphabet !");
    }
    
    return 0;
}