//print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300
#include<stdio.h>
void main()
{
	float cel=0;
	printf("fahr \t cel\n");
	for(int fahr=0;fahr<=300;fahr+=20)
	{
		cel=(float)(5*(fahr-32))/9;
		printf("%d\t%f\n", fahr, cel);
		//printf("%3d \t %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
	}
}
