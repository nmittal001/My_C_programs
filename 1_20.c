#include<stdio.h>
void main(int argc, char *argv[])
{
	int a,i;
	char c;
	printf("enter the n");
	scanf("%d",&a);
	FILE *f1=fopen(argv[1],"r");
	while((c=getc(f1))!=EOF)
	{
		i=0;
		if(c=='\t')
				while(a>i++)
					printf(" ");
		else
			printf("%c",c);
	}

}
