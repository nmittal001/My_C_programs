#include<stdio.h>
#include<string.h>
void main()
{
int i=0,k=0,j=0,count=0;
char str[500],ar[26];
printf("Enter the string");
scanf("%500s",str);
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
}
