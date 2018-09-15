#include<stdlib.h>
#include<stdio.h>
#include<string.h>

struct nlist *lookup(char *);
char *strdp(char *);
#define HASHSIZE 101
static struct nlist *hashtab[HASHSIZE];
struct nlist
{
	struct nlist *next;
	char *name;
	char *defn;
char dd[10];
};

unsigned hash(char *s)
{
	unsigned hashval;
	for(hashval=0;*s!='\0';s++)
		hashval=*s+31*hashval;
	return (hashval%HASHSIZE);
}
struct nlist *lookup(char *s)
{
	struct nlist *np;
	for(np=hashtab[hash(s)];np!=NULL;np=np->next)
		if(strcmp(s,np->name)==0)
			return np;
	return NULL;
}
struct nlist *install(char *name,char *defn)
{
	struct nlist *np;
	unsigned hashval;
	if((np=lookup(name))==NULL)
	{
		np=(struct nlist *) malloc(sizeof(*np));
		if(np==NULL || (np->name=strdp(name))==NULL)
			return NULL;
		hashval=hash(name);
		np->next=hashtab[hashval];
		hashtab[hashval]=np;
	}
	else
		free((void *) np->defn);
	if ((np->defn=strdp(defn))==NULL)
		return NULL;
	return np;
}

void undef(char *name) {
	struct nlist *fin;
	struct nlist *np;
	
	fin = lookup(name);
	//printf("------%s",fin->name);
						
	//for(np=hashtab[hash(name)];np->next!=fin;np=np->next);
	//np->next=fin->next;
	free(fin);
}
char *strdp(char *s)
{
	char *p;
	p=(char *)malloc(strlen(s)+1);
	if(p!=NULL)
		strcpy(p,s);
	return p;
}
void main(int argc,char *argv[])
{	struct nlist root,*root1;
	struct nlist *row[10],*result;

	char inpd[100],inpn[100];
	
	int n,i=0,store;
	printf("enter the number ");
	scanf("%d",&n);
	store=n;
	while(n>0)
	{
	printf("Enter the key");
	scanf("%s",inpn);
	root.name=inpn;	

	printf("Enter the value");
	scanf("%s",inpd);
	root.defn=inpd;	
	
	row[i]=install(root.name, root.defn);
	i++;n--;
	}


	for(i=0;i<store;i++)
	{
		printf("============%s->%s\n", row[i]->name, row[i]->defn);
	}
	undef("key");
	n=store;i=0;
	while(n>0)
	{
	
		if ((result = lookup(row[i]->name)) == NULL) {
			printf("key not found\n");
		} else {
			printf("%s->%s\n", result->name, result->defn);
		}
	i++;n--;
	}
}
