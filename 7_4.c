#include<stdarg.h>
#include<stdio.h>
void minscanf(char *fmt,...);
void main()
{
	int x;
	minscanf("%d",&x);
	printf("value=%d\n",x);
}
void minscanf(char *fmt,...)
{
	va_list ap;
	char *p;
	int *ival;
	double *dval;
	va_start(ap,fmt);
	for(p=fmt;*p;p++)
	{
		if(*p!='%')
		{
			continue;
		}
		switch(*++p)
		{
			case 'd':ival=va_arg(ap,int *);
				 //printf("%d",ival);
				scanf("%d",ival);
				break;
			case 'f':dval=va_arg(ap,double *);
				 scanf("%f",dval);
				 break;
			default:break;
		}
	}
	va_end(ap);
}

