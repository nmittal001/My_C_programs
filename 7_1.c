#include<stdio.h>
#include<ctype.h>
#include<string.h>
void main(int argc,char *argv[])
{
	int i=0;
	int c;
	char s[100];

	if(strcmp(argv[1],"lower")==0)
	{
		while((s[i]=getchar()) != '\n')i++;
		int j=0;
		while(j<i)
		{
			putchar(tolower(s[j]));
			j++;
		}
	}
	if(strcmp(argv[1],"upper")==0)
	{
		while((s[i]=getchar()) != '\n')i++;
                int j=0;
                while(j<i)
                {
                        putchar(toupper(s[j]));
                        j++;
                }
	}
}
