#include<stdio.h>
void main(int in, char *str[])
{
	int c=0,count=0;
	while((c=getchar())!=EOF)
	{
		if(c==' '||c=='\t'||c=='\n')
			count++;
	}
	if(count>0)
		printf(" ___\n");
	for(int i=0;i<count;i++)
	{
		printf("|   |\n");
	}
	if(count>0)
		printf("----\n");
}
