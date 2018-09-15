#include<stdio.h>
void expand(char [], char[]);
void main(int in, char *st[])
{
	char str[100],ch[100],c;
	for(int i=0;(c=getchar())!=EOF;i++)
		str[i]=c;
	//printf("%s\n---\n",str);
	expand(str,ch);
	printf("%s",(ch));
}
void expand(char str[],char ch[])
{
	int c,i=0,j=-1;
	while((c=str[i++])!='\0')
	{
		int cas=(str[i]=='-' && c<=str[i+1]);
		//printf("cas=%d\n---\n",cas);
		switch(cas)
		{
			case 1:		i++;
					while(c<str[i]){
					ch[++j]=c++;
					//printf("c=%d\n",c);
					}
					break;
			case 0: ch[++j]=c;
					break;
		}
	}
}
