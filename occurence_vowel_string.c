//	write a function to count the occurrence of vowel in a string.

#include <stdio.h>

int countVowel(char str[]);

int main() {
	char str[100];
	printf("Enter your string:-\n");
	fgets(str, 100, stdin);
	printf("Number of vowels in the string are: %d", countVowel(str));

	return 0;
}

//	function defination
int countVowel(char str[]) {
	int count = 0;

	for(int i = 0; str[i] != '\0'; i++) {
		if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
			str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
			count++;
		}
	}
	return count;
}