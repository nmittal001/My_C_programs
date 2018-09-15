#include<stdio.h>
void strct(char *,char *);
void main()
{
	int i=0;
	char s[100],p[100];
	printf("Enter the first string");
	scanf("%[^\n]%*c",s);
	printf("enter the the second string");
	scanf("%[^\n]%*c",p);
	//p='hi hello';
	strct(s,p);
	printf("the combine string= %s",s);

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
}
