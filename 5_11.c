#include <stdio.h>
void main(int argc, char *argv[])
{
int i;
for (i = 1; i < argc; i++)
printf( "%c,%s", argv[0]+1, (i < argc-1)?"":"");
printf("%d",argc);
}
