//print Fahrenheit-Celsius table for cel = 0, 20, ..., 300
#include<stdio.h>
void main()
{
	float fahr=0;
	printf("Cel \t Fahr\n");
	for(int cel=0;cel<=300;cel+=20)
	{
		//cel=(5*(fahr-32))/9;
		fahr=(float)(((9*cel)/5)+32);
		printf("%d\t%.0f\n",cel,fahr);
	}
}
