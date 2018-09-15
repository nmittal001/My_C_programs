#include<stdio.h>
void main(int in, char *str[])
{
	int c=0;
	while((c=getchar())!=EOF)
	{
		if(c==' '||c=='\t')
			printf("\n");
		else
			printf("%c",c);
	}
}
