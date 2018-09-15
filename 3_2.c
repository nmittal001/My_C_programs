#include<stdio.h>
void convert(char [], char[]);
void main(int in, char *st[])
{
	char str[100],ch[100],c;
	for(int i=0;(c=getchar())!=EOF;i++)
		str[i]=c;
	printf("%s\n---\n",str);
	convert(str,ch);
	printf("%s",(ch));
}
void convert(char str[],char ch[])
{
	int c,i=0,j=-1;
	while(str[i]!='\0')
	{
		switch(str[i])
		{
			case '\t':	ch[++j]='\\';
					ch[++j]='t';
					i++;
					break;
			case '\n':	ch[++j]='\\';
					ch[++j]='n';
					i++;
					break;
			default:	ch[++j]=str[i++];
					break;
		}
	}
}
