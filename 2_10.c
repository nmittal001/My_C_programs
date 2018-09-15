#include<stdio.h>
void main()
{
	char str[100];
	printf("Enter the upper case letters");
	scanf("%s",str);
	for(int i=0;str[i]!='\0';i++)
		printf("%c",(str[i]<='Z' && str[i]>='A')?'a'-'A'+str[i]:str[i]);
}	
