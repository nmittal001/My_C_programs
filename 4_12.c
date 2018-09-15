#include<stdio.h>
void convert(int,char []);
void main()
{
	int i,c,in;
	in=973;
	char str[100];
	//for(int k=0;(c=getchar())!=EOF;k++)
	//{str[k]=c;}
	printf("enter the number");
	//scanf("%d",&in);
	convert(in,str);
	printf("string= %s",str);
}
void convert(int in, char str[])
{
	static int i=0;
	//in=in/10;
	if(in/10>0)
	convert(in/10,str);
	str[i]=in%10+'0';
	//printf("str=%c\n",str[i]);
	i++;
}
