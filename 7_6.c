#include<stdio.h>
#include<string.h>
void main(int argc, char *argv[])
{
	int i=0;
	char line1[100],line2[100];
	FILE *f1=fopen(argv[1],"r");
	FILE *f2=fopen(argv[2],"r");
	while(fgets(line1,100,f1)!=NULL&&fgets(line2,100,f2)!=NULL)
	{
		if(strcmp(line1,line2)!=0)
		{
			printf("line1=%s \t line2=%s\n",line1,line2);
			break;
		}

	}
}
