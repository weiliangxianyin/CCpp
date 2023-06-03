#include "stdio.h"
#include "stdlib.h"

typedef int ElemType;/* ElemType���͸���ʵ������������������Ϊint */

typedef struct Node {
	ElemType data;
	struct Node *next;
} LNode,*linkList;

void initList(linkList &L);
void inputList(linkList L);
linkList locateList(linkList L,ElemType e);

int main(void) {
	linkList head;
	initList(head);
	inputList(head);
	ElemType e;
	scanf("%d",&e);
	printf("%d",locateList(head,e)==0?0:1); // exp?x:y C�����е���Ŀ���������������ʱ����x�����򷵼�y
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

linkList locateList(linkList L,ElemType e) {
	linkList p;
	p=L->next;
	while(p&&p->data!=e){
		p=p->next; 
	}
	return p;
}

