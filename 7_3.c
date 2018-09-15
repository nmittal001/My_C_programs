#include<stdarg.h>
#include<string.h>
void minprintf(char *fmt,...);
void main()
{
	int x=8;
	double y=9;
	minprintf("%d",x);
	minprintf("%f",y);
}
void minprintf(char *fmt,...)
{
	va_list ap;
	char *p,*sval;
	int ival;
	double fval;
	va_start(ap,fmt);
	for(p=fmt;*p;p++)
	{
		if(*p!='%')
		{
			continue;
		}
		switch(*++p)
		{
			case 'd':ival=va_arg(ap,int);
				printf("%d\n",ival);
				break;
			case 'o':ival=va_arg(ap,int);
				 printf("%o\n",ival);
				 break;
			case 'f':fval=va_arg(ap,double);
				 printf("%f\n",fval);
				 break;
			case 's':for(sval=va_arg(ap,char *);*sval;sval++)
					 putchar(*sval);
				 break;
			default:break;
		}
	}
	va_end(ap);
}

