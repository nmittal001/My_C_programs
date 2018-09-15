#include<stdio.h>
int binsearch(int,int [],int);
void main()
{
	int ar[10],x,n;
	printf("enter n");
	scanf("%d",&n);
	printf("enter the array");
	for(int i=0;i<n;i++)
	scanf("%d",&ar[i]);
	printf("enter the search element");
	scanf("%d",&x);
	int check=binsearch(x,ar,n);
	printf("location%d",check+1);
}
int binsearch(int x,int v[],int n)
{
	int low,high,mid;
	low=0;
	high=n-1;
	while(low<=high && v[mid]!=x)
	{
		//printf("mid=%d\n",mid);
		mid=(low+high)/2;
		printf("mid=%d\n",mid);
		if(x<v[mid])
		{	high=mid-1;
			printf("high=%d\n",high);
		}
		else
		{
			low=mid+1;
			printf("low=%d\n",low);
		}

	}
	printf("\nv[mid]%d\n",v[mid]);
	if(v[mid]==x)
		return mid;
	else
		return -1;
}
