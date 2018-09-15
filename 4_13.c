#include<stdio.h>
#include<string.h>
void convert(int ,char [],int);
int k=0;
void main()
{
	int i=0,c,in,l=0;
	in=973;
	char str[100];
	//for(int k=0;(c=getchar())!=EOF;k++)
	//{str[k]=c;}
	printf("enter the string");
	scanf("%s",str);
	l=strlen(str);
	k=l/2;
	convert(i,str,l);
	printf("string= %s",str);
}
void convert(int i,char str[],int len)
{
	char r=str[i];
	str[i]=str[--len];
	str[len]=r;
	printf("str[i]=%c,str[len]=%c\n",str[i],str[len]);
	i=i+1;
	k--;
	if(k>0)
		convert(i,str,len);
}
