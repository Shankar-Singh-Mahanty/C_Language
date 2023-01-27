// Loop iterator or counter can also be a float or a character.
#include<stdio.h>
int main(){
    for(float i=1.0; i<=5.0; i++){
        printf("%f \n", i);
    }
    printf("\n =====================================\n");
    for(char ch='A'; ch<='Z'; ch++){
        printf("%c \t", ch);
    }
    return 0;
}
