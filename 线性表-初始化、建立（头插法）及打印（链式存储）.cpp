#include "stdio.h"
#include "stdlib.h"

typedef int ElemType;/* ElemType类型根据实际情况而定，这里假设为int */

typedef struct Node {
	ElemType data;
	struct Node *next;
} LNode,*linkList;
void initList(linkList &L);
void inputList(linkList L);
void printList(linkList L);

int main(void) {
	linkList head;
	initList(head);
	inputList(head);
	printList(head);
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
		int data;
		scanf("%d",&data);
		p=new LNode;
		p->data=data;
		p->next=L->next;
		L->next=p; 
	}
}

void printList(linkList L) {
	linkList p=L->next;
	while(p!=NULL) {
		printf("%d ",p->data);
		p=p->next;
	}
	printf("\n");
}
