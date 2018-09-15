#include<stdio.h>
unsigned getbits(unsigned,int,int);
void main()
{
	/*int n=4,p=4,x=5;
	printf("5>>1 = %u\n",5>>1);
	printf("5>>2 = %u\n",5>>2);
	printf("5>>3 = %u\n",5>>3);
	printf("5>>4 = %u\n",5>>4);
	printf("5<<1 = %u\n",5<<1);
	printf("5<<2 = %u\n",5<<2);
	printf("5<<3 = %u\n",5<<3);
	printf("5<<4 = %u\n",5<<4);
	printf("%u",(x>>(p+1-n)) & ~(~0<<n));
	*/
	printf("%u",getbits(10,1,3));
}

unsigned getbits(unsigned x, int p, int n)
{
return ((x>>(p+1-n)) & ~(~0<<n));
}
