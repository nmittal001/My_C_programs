#include <stdio.h>
void main(int in, char *str[])
{
	int len;//current line length
	int c,k=0,j=0,count=0,br=1;
	char line[1200];//maximum length seen so far
	char longest[1200];//longest line saved
	int max = 0,lmax=0;
	int l;
	for(int i=0;line[i]!='\0';i++)
                        line[i]='\0';

	while((c=getchar())!=EOF)
	{
		if(count>10 && c=='\n')
                {
			printf("%s\n",line);
		}
		if(c=='\n')
		{
			count=0;
			k=0;
			for(int i=0;line[i]!='\0';i++)
			line[i]='\0';
		}
		else
		{
			count++;
			line[k]=(char)c;
			//printf("%c",c);
			k++;
		}
	}
}
