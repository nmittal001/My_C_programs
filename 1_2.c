#include<stdio.h> //Warning: incompatible implicit declaration of built-in function ‘printf’
void main()    // error: expected identifier or ‘(’ before ‘{’ token
{
	printf("hello\tworld");
	printf("hello\cworld");//warning: unknown escape sequence: '\c'
	printf("\n");
}
