#include "stdio.h"
#include "stdlib.h"

typedef int ElemType;/* ElemType类型根据实际情况而定，这里假设为int */

typedef struct Node {
	ElemType data;
	struct Node *next;
} LNode,*linkList;

void initList(linkList &L);
void inputList(linkList L);
void getElem(linkList L,int i, ElemType &e);

int main(void) {
	linkList head;
	initList(head);
	inputList(head);
	int i;
	scanf("%d",&i);
	ElemType e;
	getElem(head,i,e);
	printf("%d\n",e);
	return 0;
}

void initList(linkList &L) {
	L=new LNode;
	L->next=NULL;
}

void inputList(linkList L) {
	int n;
	linkList p;
	scanf("%d",&n);
	for(int i=0; i<n; i++) {
		p = new LNode;
		scanf("%d",&p->data);
		p->next=L->next;
		L->next=p;
	}
}

void getElem(linkList L,int i, ElemType &e) {
	linkList p;
	int j=0;
	p=L->next;
	while (p!=NULL&&j<i-1) {
		p=p->next;
		j++;
	}
	e=p->data;
}
