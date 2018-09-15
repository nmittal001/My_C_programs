#include<stdio.h>
void main()
{
	int k=0;
	printf("divisible by 2 and 3=>>");
	for(int i=0;i<100;i++)
	{k=0;
		if(i%2==0)
			k++;
		if(i%3==0)
			k++;
		if(k==2)
			printf("%d, ",i);
	}
}
