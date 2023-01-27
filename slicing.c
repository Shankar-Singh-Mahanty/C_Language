//	Write a function named slice , which takes a string & returns a sliced string from index n to m.

#include<stdio.h>

//	function declaration
void slice(char str[], int n, int m);

int main() {
	char str[] = "HelloWorld";
	slice(str, 3, 6);

	return 0;
}

//	function defination
void slice(char str[], int n, int m) {	//	n & m are valid values
	char newStr[50];	// size by default (m-n+1)
	int i, j = 0;
	for(i = n; i <= m; i++, j++) {
		newStr[j] = str[i];
	}
	newStr[j] = '\0';
	puts(newStr);
}