#include<stdio.h>
void main(int argc, char *argv[])
{
	int a,i,j=0,k;
	char c,s[100];
	//printf("enter the n");
	//scanf("%d",&a);
	FILE *f1=fopen(argv[1],"r");
	while((c=getc(f1))!=EOF)
	{
		s[i]=c;
		if(c==' ' && i<8)
		{
			i++;
		}
		else
			i=0;
		if(i==8)
		{
			while(--i)printf("\b");
			printf("\t");
			s[0]='\0';
			i=0;
		}
		else
		{	

			printf("%c",c);

		}
	}
}
