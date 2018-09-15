#include<stdio.h>
#include<string.h>
void convert(int,char [],int);
void main()
{
	char str[10];
	int n,b;
	printf("enter the width");
	scanf("%d",&b);
	printf("enter the integer n");
        scanf("%d",&n);
	convert(n,str,b);
	//printf("check2");
	printf("the binary value=%s",str);
}
void convert(int n,char str[],int w)
{
	int i=0,rem,j=0;
	char c;
	int div=n;//=n/b;
	//char str[10];
	//printf("div=%d\n",div);
	while(div>0)
	{	n=div;
		div=div/10;
		rem=n%10;
		//printf("rem=%d\n",rem);
		str[i]=rem+'0';
		printf("ch=%c,\n",str[i]);
		i++;
		//printf("i=%d\n",i);
		//str[i]='\0';

	}
	while(w>0)
	{
		str[i++]=' ';
		w--;
	}
	//printf("check");
	
	for (i=0, j=strlen(str)-1; i < j; i++, j--)
	{
		c=str[i];
		str[i]=str[j];
		str[j]=c;
	}
	//printf("%s\n---------\n",str);

}
