#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int getop(char []);
void push(double);
double pop(void);
int getch(void);
void ungetch(int);
void ungets(char []);
char buf[100];
int bufp = 0;
int main(void)
{
	char str[100];
	int c;
	printf("Enter the line");
	scanf("%s",str);
	ungets(str);
	for(int i=0;(c=getch())!=EOF;i++)
		printf("%c\n",c);//new line
}
int getch(void)
{
	return(bufp>0)?buf[--bufp]:-1;
}

void ungetch(int c)
{
	if(bufp >= 100)
		printf("ungetch: too many characters\n");
	else
		buf[bufp++] = c;
}
void ungets(char str[])
{
	int len;
	len = strlen(str);
	if(len==1)
		ungetch(str[--len]);
	else
		ungetch(str[0]);
}
