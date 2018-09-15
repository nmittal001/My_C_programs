#include<stdio.h>
#include<string.h>
int main(int arg,char *stri[])
{
int i=0,k=0,j=0,count=0;
char str[100000],ar[26];
strcpy(str,stri[2]);
for (i=0; str[i]!='\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			k=1;
			for(j=0;ar[j]!='\0';j++)
			{
				if(ar[j]==str[i])
				{
					k=0;
				}

			}
			if(k==1)
			{
				ar[j]=str[i];
				count++;
			}
		}
	}
printf("\n count= %d",count);
printf("\n %s",stri[2]);
}
