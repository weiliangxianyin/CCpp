#include <stdio.h>
#include <stdlib.h>

#define OK 1
#define ERROR 0
#define OVERFLOW -1

typedef int Status;

typedef struct LNode {
	double coef;
	int expn;
	struct LNode *next;
} LNode, *linkList;
Status initList(linkList &L);
linkList locateElem (linkList L,int e);
void listInsert(linkList &L,double coef,int expn);
void addMutiPloy(linkList &pa,linkList pb);
void printList(linkList L);

int main(void) {
	linkList pa,pb;
	int n,i,expn;
	double coef;
	initList(pa);
	initList(pb);
	scanf("%d",&n);
	for(i=1; i<=n; i++) {
		scanf("%lf%d",&coef,&expn);
		listInsert(pa,coef,expn);
	}
	scanf("%d",&n);
	for(i=1; i<=n; i++) {
		scanf("%lf%d",&coef,&expn);
		listInsert(pb,coef,expn);
	}
	addMutiPloy(pa,pb);
	printList(pa);
	return 0;
}

Status initList(linkList &L) {
	L=(linkList)malloc(sizeof(LNode));
	if(!L) exit(OVERFLOW);
	L->next=NULL;
	return OK;
}

void listInsert(linkList &L,double coef,int expn) {
	linkList p=(linkList)malloc(sizeof(LNode));
	if(!p) exit(OVERFLOW);
	p->coef=coef;
	p->expn=expn;
	p->next=NULL;
	linkList t=locateElem(L,expn);
	p->next=t->next;
	t->next=p;
}
/*仅提交以下代码*/
linkList locateElem (linkList L,int e) {
	
}

void addMutiPloy(linkList &pa,linkList pb) {
	
}

void printList(linkList L) {
	
}
