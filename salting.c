// find the salted form of a password entered by user if the salt is "123" & added at the end.

#include<stdio.h>
#include<string.h>

// 	function declaration
// void salting(char password[]);

int main(){
	char password[50];
	printf("Enter your password: ");
	scanf("%s", password);
	char salt[] = "123";
	strcat(password, salt);
	puts(password);

	// salting(password);	//	function call
	return 0;
}

//	function defination
// void salting(char password[]) {
// 	char salt[] = "123";
// 	// char newPass[50];
// 	// strcpy(newPass, password);
// 	strcat(password, salt);
// 	puts(password);
// }