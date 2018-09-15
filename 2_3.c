#include<stdio.h>
void main(int in,char *str[])
{
	int c,hex,st=0,check=0;
	for(int i=0;(c=getchar())!=EOF;i++)
	{
		printf("char=%c\n",c);
		check=-1;
		if(c>='a' && c<='f'&& c!='\n')
		{
			hex=c-'a'+10;
			printf("hex=%d\n",hex);
			check=1;
		}
		if(c>='A' && c<='F' && c!='\n')
		{
			hex=c-'A'+10;
			check=1;
		}
		if(c>='0' && c<='9' && c!='\n')
		{
                        hex=c-'0'+10;
			check=1;
		}
		if(check==1)
			st=16*st + hex;

	}
	printf("hex=%d",st);

}
