#include <stdio.h>
void main(int in, char *str[])
{
	int c,k=0;
	char line[120],rev[120];
	int count=0;
	while((c=getchar())!=EOF)
	{
		line[count]=c;
		if(c=='\n')
		{
			//for(int j=count;(line[j]==' '&& line[j]=='\t');j--);
				//line[++j]='\n';
			count--;
			for(int i=0;line[i]!='\n';i++)
			{
				rev[i]=line[count];
				count--;
			}
			printf("%s\n",rev);
			for(int i=0;rev[i]!='\0';i++)
			{
				rev[i]='\0';
				line[i]='\0';
			}
			count=0;

		}
		else
			count++;
	}
}
