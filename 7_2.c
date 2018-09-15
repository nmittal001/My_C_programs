#include<stdio.h>
#include<ctype.h>
void main(int arg, char *str[])
{
	char ch=*str[1];
	if(iscntrl(ch) || ch == ' ')
	{
		printf("%o",ch);
	}
	printf("\\%03o",ch);
}
