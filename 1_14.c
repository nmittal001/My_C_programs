#include<stdio.h>
void main(int in, char *str[])
{
	int c=0,count=0,k=0,index=-1,i=0;
	int ar[52][2];
	for(int i=0;i<52;i++)
	{
		ar[i][0]=-1;
		ar[i][1]=0;
	}
	while(((c=getchar())!=EOF))
	{
		//ar[i][0]=c;
		k=0;
		for(int i=0; ar[i][0]!=-1 ;i++)
		{
			if(ar[i][0]==c && c!=' ')
			{
				//printf("===%d\n",ar[i][0]);
				k=1;
				ar[i][1]+=1;
			}
		}
		if(k==0 && c!=' '&& c!='\n')
		{	index+=1;
			ar[index][0]=c;
			ar[index][1]+=1;
			//index+=1;
		}
		i++;
		//printf("%c==>>%d\n",ar[index][0],ar[index][1]);
	}
	//printf("---------");
	for(int i=0;ar[i][0]!=-1;i++)
	{
		printf("%c===",ar[i][0]);
		for(int j=0;j<ar[i][1];j++)
			printf("*");
		printf("\n");
	}
//	printf("%c====",ar[6][0]);	
}
