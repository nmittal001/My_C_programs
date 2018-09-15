#include<stdlib.h>
#include<stdio.h>
#include<string.h>
struct nlist
{
	struct nlist *next;
	char name[10];
	char defn[10];
};

void main()
{	struct nlist root,*ptr;
	
	ptr=&root;
	printf("Enter the key 1");
	scanf("%s",ptr->name);
//	scanf("%s",&(root -> name));
	printf("===%s\n",ptr->name);
	
	
}
