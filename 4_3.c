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
char buf[100];
int bufp = 0;
int main(void)
{
	int x,y,k;
	int type;
	double op2;
	char s[100];
	while((type=getop(s))!=EOF)
	{
		switch(type)
		{
			case '0':push(atof(s));
				 break;
			case '+':push(pop()+pop());
				 break;
			case '*':push(pop()*pop());
				 break;
			case '-':op2=pop();
				 push(pop()-op2);
				 break;
			case '/':op2=pop();
				 if(op2!=0.0)
					 push(pop()/op2);
				 else
					 printf("error:zero divisor\n");
				 break;
			case '%':op2=pop();
				 if(op2 != 0.0)
					 push(fmod(pop(),op2));
				 else
					 printf("erro:zero divisor\n");
				 break;
			case '\n':
				 printf("\t%.8g\n",pop());
				 break;
			default:printf("error: unknown command %s\n",s);
				break;
		}
	}
	return 0;
}


int sp=0;
double val[100];
void push(double f)
{
	if(sp<100)
		val[sp++]=f;
	else
		printf("error:stack full, cant push %g\n",f);
}

double pop(void)
{
	if(sp>0)
		return val[--sp];
	else
	{
		printf("error: stack empty\n");
		return 0.0;
	}
}

int getop(char s[]){
	int i, c;
	while ((s[0]=c=getch())==' '||c=='\t');
	s[1]='\0';
	if(!isdigit(c) && c!='.' && c!='-')
		return c;
	i=0;
	if(c=='-' || isdigit(c))
		while(isdigit(s[++i]=c=getch()));
	if(c=='.')
		while(isdigit(s[++i]=c=getch()));
	s[i]='\0';
	if(c!=EOF)
		ungetch(c);
	if(strcmp(s,"-")==0)
		return '-';
	return '0';
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
