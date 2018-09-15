#include<stdio.h>
unsigned getbits(unsigned,int);
void main()
{
	printf("%u",getbits(31,3));
}

unsigned getbits(unsigned x, int n)
{
	unsigned shiftR;
	shiftR = x << (32 - n);
   	x = x >> n;
	//printf("x=%d\n",x);
   	shiftR = x | shiftR;
	//printf("x=%d\n",x);
	//printf("shiftR=%u\n",shiftR);
	//unsigned xor=x | shiftR;
	return (shiftR);
}
