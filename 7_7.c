#include<stdio.h>
#include<string.h>
int strct(char *,char *);
void main(int argc, char *argv[])
{
	int i=0;
	char s[100],p[100];
	printf("Enter the first string");
	//scanf("%[^\n]%*c",s);
	printf("enter the the second string");
	//scanf("%[^\n]%*c",p);
	//p='hi hello';
	
	int check=strct(argv[1],argv[2]);
	if(check==1)
		printf("the combine string= %s, and =%s",argv[1],argv[2]);

}
int strct(char *f11, char *f22)
{
	FILE *f1=fopen(f11,"r");
	FILE *f2=fopen(f22,"r");
	char *s,*p;
	char line1[100],line2[100];
	while(fgets(line1,100,f1)!=NULL)
		s=line1;
	//p=line2;
	while(fgets(line2,100,f2)!=NULL)
		p=line2;
	int k=0;
	char *e=p;
	printf("\n==%s\n",s);
	printf("\n==%s\n",p);
	while(*s++!='\0');
	s--;
	while(*p++!='\0');
	p--;

		//printf("s===%s",*s);
	while(*e++!='\0')
	{
		if(*s--==*p--);
		else
			k=-1;

	}
	if(k==-1)
	{
		printf("not equal at end");
		return 0;
	}
	else
	{
		printf("EQUAL");
		return 1;
	}
}
