#include<stdio.h>
void main(int in, char *str[])
{
	int c;
	while((c=getchar())!=EOF)
	{
		printf("before= %d",c!=EOF);
	}
	printf("\nafter=%d",(c=getchar())!=EOF);
}
