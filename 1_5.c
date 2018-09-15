//Modify the temperature conversion program to print the table in reverse order, that is, from 300 degrees to O.
#include<stdio.h>
void main()
{
	float  fahr=0;
	printf("Cel \t Fahr\n");
	for(int cel=300;cel>=0;cel-=20)
	{
		//cel=(5*(fahr-32))/9;
		fahr=((9*cel)/5)+32;
		printf("%d \t %.0f\n",cel,fahr);
	}
}
