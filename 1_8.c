#include<stdio.h>
void main(int in, char *str[])
{
	int c=0,count=0;
	while((c=getchar())!=EOF)
	{
		if(c=='\n'||c=='\t'||c==' ')
			count++;
	}
	printf("\n Count=%d",count );
}
