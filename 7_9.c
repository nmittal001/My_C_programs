#include<stdio.h>
#include<string.h>
#include<ctype.h>
# define upper(c) ( (c>='A'&& c<='Z')?1:0 )
void main(void)
{
	char c=getchar();
	int i=upper(c);
	if(i==1)
		printf("Yes it is upper case letter");
	else
		printf("No it is not a upper case letter");
}
