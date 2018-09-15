#include <stdio.h>
#define MAXLINE 100 /* maximum input line size */
//int getline(char line[], int maxline);
//void copy(char to[], char from[]);// print longest input line
void main(int in, char *str[])
{
	int len;//current line length
	int count=-1,c;
	char line[MAXLINE];//maximum length seen so far
	char longest[MAXLINE];//longest line saved
	int max = 0,lmax=0;
	int l;
	while((c=getchar())!=EOF)
	{
		if(c!='\n')
		{
			count++;
			line[count]=(char)c;
			//printf("count=%d, max=%d \n",count,max);
			if(count>=lmax)
			{
				max=count;
				int i=0;
                        	while((line[i])!= '\0')
				{
				//	printf("check");
					longest[i] = line[i];
					++i;
				}
				longest[--i]='\0';
				//printf("\n");
			}
		}
		else
		{
			count=-1;
			for(int i=0;line[i]!='\0';i++)
                        {
                                line[i]='\0';
                        }
			lmax=max;
		}
	}
	printf("\nmax=%d\n",max);
	printf("longest line=");
	for(int i=0;longest[i]!='\0';i++)
                                {
                                        printf("%c",longest[i]);
                                }
//	printf("\n%s",longest);
}
