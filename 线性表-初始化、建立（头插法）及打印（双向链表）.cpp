#include "stdio.h"
#include "stdlib.h"

typedef int ElemType;

typedef struct Node {
	ElemType data;
	struct Node *prior;
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
	L->prior=NULL;
	L->next=NULL;
}

void inputList(linkList L) {
	int n;
	linkList p;
	scanf("%d",&n);
	for(int i=0; i<n; i++) {
		p=new LNode;
		scanf("%d",&p->data);
		p->next=L->next;
		if (L->next != NULL) {
            L->next->prior = p;
        }
        p->prior = L;
        L->next = p;
	}
}

void printList(linkList L) {
	linkList p=L->next,q;
	while(p!=NULL) {//���������ƶ�ָ��������ݣ�����ָ��q�ƶ���˫�������β��
		printf("%d ",p->data);
		q=p;
		p=p->next;
		
	}
	printf("\n");
	while(q!=L) {//���������ƶ�ָ���������
		 printf("%d ",q->data);
        q=q->prior;
	}
	printf("\n");
}
