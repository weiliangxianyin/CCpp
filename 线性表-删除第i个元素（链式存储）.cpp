#include <stdio.h>
#include <stdlib.h>

typedef int ElemType;

typedef struct Node {
	ElemType data;
	struct Node *next;
} LNode,*linkList;

void initList(linkList &L);
void inputList(linkList L);
void deleteList(linkList L,int i);
void printList(linkList L);

int main(void) {
	int i;
	linkList head;
	initList(head);
	inputList(head);
	scanf("%d",&i);
	deleteList(head,i);
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
		p = new LNode;
		scanf("%d",&p->data);
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

/*???????*/
void deleteList(linkList L,int i) {
	linkList p;
	p=L;
	int j=0;
	while(p&&j<i-1){
		p=p->next;
		j++;
	}
	if(!p||j>(i-1))return;
	linkList s;
	s=p->next;
	p->next=s->next;
	delete s;
}
