#include<stdio.h>
#include<ctype.h>
#include<math.h>
float convert(char []);
void main()
{
	char str[100];
	float fno;
	printf("Enter the number");
	scanf("%s",str);
	fno=convert(str);
	printf("%f",fno);
}
float convert(char str[])
{
	float digit=0.0,afterdigit=1.0;
	int sign,extra,i=0;

	for(;isdigit(str[i]);i++)
		digit=10.0*digit+(str[i]-'0');
	if(str[i]=='.')
		i++;
	for(;isdigit(str[i]);i++)
	{
		digit=10.0*digit+(str[i]-'0');
		afterdigit=afterdigit*10;
	}
	if(str[i]=='E'||str[i] =='e')
		i++;
	if(str[i]=='+'||str[i] =='-')
	{
		sign=str[i];
		i++;
	}
	for(extra=0;isdigit(str[i]);i++)
		extra=10.0*extra+(str[i]-'0');
	
	if( sign=='-')
	{
		float x=((digit/afterdigit)/pow(10,extra));
		return x;
	}
	else
	{
		float x=((digit/afterdigit)*pow(10,extra));
		return x;
	}
}
