#include<stdio.h>
void main()
{
	int c,i=0;
	char ch;
	while((c=getchar())!=EOF)
	{i=0;
		if(c=='\t')
		{
			printf("\\t");i++;

		}
		else if(c=='\b')
                {
                        printf("\\b");i++;

                }
		else if(c=='\\')
		{
			printf("\\\\");i++;
		}
		else if(i==0)
			printf("%c",c);
		
	}
}
