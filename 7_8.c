#include<stdio.h>
#include<string.h>
int strct(char *,char *);
void main(int argc, char *argv[])
{
	int i=1;
	char c;
	while(--argc>0)
	{
		printf("------------file %d=%s--------------\n",i,argv[i]);
		FILE *f1=fopen(argv[i],"r");
		while((c=getc(f1))!=EOF)
			printf("%c",c);
		i++;
		printf("--------------ENDS HERE-----------------\n");

	}
}
