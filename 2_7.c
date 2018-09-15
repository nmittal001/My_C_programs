#include<stdio.h>
unsigned getbits(unsigned,int,int);
void main()
{
	printf("%u",getbits(5,4,3));
}

unsigned getbits(unsigned x, int p, int n)
{
int mate=(~(~0 << n) << (p + 1 - n));
return (x^mate);
}
