#include<stdio.h>
void main(void)
{
	printf("Signed char %d to %d\n",-(char)((unsigned char) ~0 >> 1) - 1,(char) ((unsigned char) ~0 >> 1));
	printf("Signed short %d to %d \n",-(short)((unsigned short)~0 >>1) -1, (short)((unsigned short)~0 >> 1 ));
	printf("Signed int %d to %d\n",-(int)((unsigned int)~0 >> 1) -1,(int)((unsigned int)~0 >> 1));
	printf("Signed long %ld to %ld\n",-(long)((unsigned long)~0 >>1) -1,(long)((unsigned long)~0 >> 1));
	printf("Unsigned char %d\n",(unsigned char)~0);
	printf("Unsigned short %d\n",(unsigned short)~0);
	printf("Unsigned int %u\n",(unsigned int)~0);
	printf("Unsigned long %lu\n",(unsigned long)~0);
}
