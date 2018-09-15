#include<stdio.h>
void strct(char *,char *);
void strcp(char *,char *,int);
void strcopy(char *,char *);
void main()
{
	int i=0,n=0;
	char s[100],p[100];
	printf("Enter the first string");
	scanf("%[^\n]%*c",s);
	printf("enter the the second string");
	scanf("%[^\n]%*c",p);
	printf("enter the the value of n");
	scanf("%d",&n);
	//p='hi hello';
	strcp(s,p,n);
	//printf("\nthe combine string= %s\n",s);

	strct(s,p);
	printf("\nthe cat string= %s\n",s);
	strcopy(s,p);
	printf("\nthe copy string= %s\n",s);
	
}
void strct(char *s, char *p)
{
	while(*s++!='\0');
	s--;
		//printf("s===%s",*s);
	while(*p!='\0')
	{
		*s++=*p++;
	}
	*s++='\0';
}


void strcp(char *s, char *p,int n)
{
	int k=0;

		//printf("s===%s",*s);
	while(n>0)
	{
		if(*s++==*p++);
		else
			k=-1;
	n--;

	}
	if(k==-1)
		printf("not equal at end");
	else
		printf("EQUAL");
}
void strcopy(char *s,char *p)
{
	while(*p!='\0')
	{
		*s++=*p++;
	}
*s++='\0';
}
