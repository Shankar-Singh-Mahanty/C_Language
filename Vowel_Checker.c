//WAP to input any alphabet and check whether it is vowel or consonant.

#include<stdio.h>
int main()
{
	char ch;
	printf("Enter your Alphabet:\n");
	scanf("%c", &ch);
	if((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u'))
	printf("The entered alphabet is a vowel.");
	else if((ch=='A')||(ch=='E')||(ch=='I')||(ch=='O')||(ch=='U'))
	printf("The entered alphabet is a vowel.");
	else
	printf("The entered alphabet is a consonant.");
	
		return 0;
}