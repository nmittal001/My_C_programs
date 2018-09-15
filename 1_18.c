#include <stdio.h>
void main(int in, char *str[])
{
	int c,k=0;
	char line[1200];//maximum length seen so far
	int count=0;
	while((c=getchar())!=EOF)
	{
		line[count]=c;
		if(c=='\n')
		{
			count--;
			for(int j=count;(line[j]==' '&& line[j]=='\t');j--);
				//line[++j]='\n';
			printf("%s",line);
			for(int i=0;line[i]!='\0';i++)
				line[i]='\0';
			count=0;

		}
		else
			count++;
	}
}
