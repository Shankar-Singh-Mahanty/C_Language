//  Take a string input from the user using %c

#include<stdio.h>

int main(){
    char str[50];
    char ch;
    int i = 0;
    printf("Enter your string:-\n");
    while (ch != '\n') {    // loop will take character input until enter key is hitted
        scanf("%c", &ch);
        str[i] = ch;
        i++;
    }
    str[i] = '\0';
    printf("Your string is:-\n");
    puts(str);
    
    return 0;
}