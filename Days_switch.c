// WAP to print days using characters by switch case
// we can also do the same by just changing the characters into numbers.
#include<stdio.h>
int main(){
    char day;   // m- mon, t- tues, w- wed, T- thu, f- fri, s-sat, S- sun
    printf("Enter day: ");
    scanf("%c", &day);

    switch(day){
        case 'm': printf("Monday \n");
            break;
        case 't': printf("Tuesday \n");
            break;
        case 'w': printf("Wednesday \n");
            break;
        case 'T': printf("Thursday \n");
            break;
        case 'f': printf("Friday \n");
            break;
        case 's': printf("Saturday \n");
            break;
        case 'S': printf("Sunday \n");
            break;
        default: printf("Not a valid day! \n");
    }
    return 0;
}