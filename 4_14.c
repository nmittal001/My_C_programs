#include<stdio.h>
#define swap(t,a,b){t c;c=a;a=b;b=c;}
void main()
{
	int a,b,c;
	printf("enter the two numbers");
	scanf("%d",&a);
	printf("enter the two numbers");
        scanf("%d",&b);
	swap(int,a,b);
	printf("\na=%d,b=%d",a,b);
}
