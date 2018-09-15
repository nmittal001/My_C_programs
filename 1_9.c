#include<stdio.h>
void main(int in, char *str[])
{
	int c,i=0;
	char ch;
	while((c=getchar())!=EOF)
	{
		if(c==' ')
		{
			if(i==0)
				printf("%c",c);
			i++;

		}
		else
		{
			i=0;
			printf("%c",c);
		}


	}
}
