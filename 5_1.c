#include<stdio.h>
#include<ctype.h>
int getint(int *);
void ungetch(int);
int getch(void);
char buf[100];
int bufp = 0;

void main()
{
	int nun,pn;char str[100];
	printf("Enter the string");
	//scanf("%d",str);
	nun=getint(&pn);
	if(nun==0)
		printf("please enter the valid number");
	else
		printf("interger value=%d",pn);
}
int getint(int *pn)
{
	int c,sign;*pn=0;
	while(isspace(c=getch()));
	if(!isdigit(c)&&c!=EOF&&c!='+'&&c!='-')
	{
		ungetch(c);
		return 0;
	}
	sign=(c=='-')?-1:1;
	if(c=='+'||c=='-')
		c=getch();
	while(isdigit(c))
	{
		*pn=10 * *pn+(c-'0');
		c=getch();
	}
	*pn *=sign;
	if(c!=EOF)
		ungetch(c);
	return c;
}
int getch(void)
{
        return(bufp>0)?buf[--bufp]:getchar();
}
void ungetch(int c)
{
        if(bufp >= 100)
                printf("ungetch: too many characters\n");
        else
                buf[bufp++] = c;
}
