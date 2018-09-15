#include <stdio.h>
#include <math.h>
void main()
{
	double svalue,evalue;
	double pow1value,pow2value;
	double result;

	printf("Enter the sin value");
	scanf("%lf",&svalue);
	printf("Enter the exp value");
        scanf("%lf",&evalue);
	printf("Enter the power(p1,p2) value");
        scanf("%lf",&pow1value);
	scanf("%lf",&pow2value);
	
	result=sin(svalue);
	printf("\nsine value=%lf\n",result);
	result=exp(evalue);
        printf("exponent value=%lf\n",result);
	result=pow(pow1value,pow2value);
        //result=pow(2,4);
	printf("power value%lf\n",result);
}
