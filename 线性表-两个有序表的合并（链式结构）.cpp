#include "stdio.h"
#include "stdlib.h"

typedef int ElemType;

typedef struct Node {
	ElemType data;
	struct Node *next;
} LNode,*linkList;
void initList(linkList &L);
void inputList(linkList L);
void printList(linkList L);
void mergeList(linkList LA,linkList LB,linkList LC);

int main(void) {
	linkList LA,LB,LC;
	initList(LA);
	inputList(LA);
	initList(LB);
	inputList(LB);
	initList(LC);
	mergeList(LA,LB,LC);
	printList(LC);
	return 0;
}

void initList(linkList &L) {
	L=new LNode;
	L->next=NULL;
}

void inputList(linkList L) {//尾插入法建立链表 
	int n;
	linkList p,tail;
	tail=L;
	scanf("%d",&n);
	for(int i=0; i<n; i++) {
		p=new LNode;
		scanf("%d",&p->data);
		p->next=NULL;
		tail->next=p;
		tail=p;
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

void mergeList(linkList LA,linkList LB,linkList LC){
	linkList pa,pb,pc;
	pa=LA->next; pb=LB->next; pc=LC;
	while(pa&&pb){
		if(pa->data<=pb->data){
			pc->next=pa;
			pc=pa;
			pa=pa->next;
		}
		else{
			pc->next=pb;
			pc=pb;
			pb=pb->next;
		}
	}
	pc->next=pa!=NULL?pa:pb;
	delete LA;
	delete LB;
}
