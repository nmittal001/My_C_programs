#include<stdio.h>
int strrindex (char [], char []);
void main()
{
char s[100],t[100];
int i=0;
printf("enter in s");
scanf("%s",s);
printf("enter in t");
scanf("%s",t);
printf("%d",strrindex(s,t));

}
int strrindex(char s[], char t[])
{
	int i=0,j=0,k=0;
	for(i=0;t[i+1]!='\0';i++);
	//printf("i=%d-------\n",i);
	for(j=0;s[j]!='0';j++)
	{
		if(s[j]==t[i])
			return j;
	
	}
	return -1;

}
