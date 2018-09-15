#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include<stdlib.h>
#define MAXWORD 100

struct tnode *addtree(struct tnode *, char *);
void treeprint(struct tnode *);
int getword(char *, int);
struct tnode *talloc(void);
char *strdp(char *);

struct tnode
{
	char *word;
	int count;
	struct tnode *left;
	struct tnode *right;
};
void main()
{
	struct tnode *root;
	char word[MAXWORD];
	root=NULL;
	char rem[100];
	int i=0,k=0;
	char wordremove[8][10]={
                         "the",
                         "a",
                         "an",
			"it",
			"he",
			"she",
			"they"
                     };
	
	while(getword(word,MAXWORD)!=EOF)
	{i=0;k=0;
		while(i<8)
		{	if((strcmp(wordremove[i],word)== 0))
				k=1;
			i++;
		}
		if(k)continue;
		if(isalpha(word[0]))
			root=addtree(root,word);
	}
	treeprint(root);
}

struct tnode *addtree(struct tnode *p,char *w)
{
	int cond;
	if(p==NULL)
	{
		p=talloc();
		p->word=strdp(w);
		p->count=1;
		p->left=p->right=NULL;
	}
		else if((cond=strcmp(w, p->word))==0)
			p->count++;
		else if(cond<0)
			p->left=addtree(p->left,w);
		else
			p->right=addtree(p->right,w);
		return p;
}
void treeprint(struct tnode *p)
{
	if(p!=NULL)
	{
		treeprint(p->left);
		printf("%4d %s\n", p->count, p->word);
		treeprint(p->right);
	}
}

struct tnode *talloc(void)
{
	return (struct tnode *)malloc(sizeof(struct tnode));
}
char *strdp(char *s)
{
	char *p;
	p=(char *)malloc(strlen(s)+1);
	if(p!=NULL)
		strcpy(p,s);
	return p;
}


int getword(char *word,int lim)
{
	int c,getch(void);
	void ungetch(int);
	char *w=word;
	int t;
	while(isspace(c=getch()));
	if(c!=EOF)
		*w++=c;
	if(!isalpha(c))
	{
		if(c=='\"')
		{
			for(c=getch();c!='\"';c=getch());
		}
		else if(c=='#')
		{
			for(c=getch();c!='\n';c=getch());
		}
		else if(c=='/')
			if((c=getch())=='/')
			{
				for(c=getch();c!='\n';c=getch());
			}
			else ungetch(c);
		else
			for(;!isspace(c)&&c!=EOF;c=getch());
		*w='\0';
		return c;
	}
	for(;--lim>0;w++)
		if(!isalnum(*w=getch()))
		{
			if(!isalnum(*w))
			{
				ungetch(*w);
				break;
			}
		}
	*w = '\0';
	return word[0];
}
#define BUFSIZE 100
char buf[BUFSIZE];
int bufp=0;
int getch(void)
{
	return (bufp>0)?buf[--bufp]:getchar();
}
void ungetch(int c)
{
	if(bufp>=BUFSIZE)
		printf("ungetch: too many characters\n");
	else buf[bufp++]=c;
}
