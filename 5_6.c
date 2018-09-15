#include<stdio.h>
#include<string.h>
void strrev(char *,int);
void main()
{
	int i=0,n=0;
	char s[100],p[100];
	printf("Enter the first string");
	scanf("%[^\n]%*c",s);
	int len=strlen(s);
	printf("%d",len);
	strrev(s,len);
	printf("\nthe reversed string= %s\n",s);
}
void strrev(char *k,int len)
{
	char *p=k,*s=k,r;
	while(*p++!='\0');p--;p--;	
	//printf("len=%d",len);
	for( int c = 0 ; c < len/2; c++ )
	{
		//printf("c===%d",len);
		r=*p;
		*p=*s;
		*s=r;
		s++;p--;
	}

}

