#include <stdio.h>
#include <stdlib.h>
// 假设多项式降序排列

typedef struct LNode {
	double coef;
	int expn;
	struct LNode *next;
} LNode, *linkList;
void initList(linkList &L);
void inputList(linkList L);
void listInsert(linkList &L,double coef,int expn);
linkList locateElem (linkList L,int e);
void printList(linkList L);
void addMutiPloy(linkList pa,linkList pb,linkList pc);

int main(void) {
	int i;
	linkList pa,pb,pc;
	initList(pa);
	inputList(pa);
	initList(pb);
	inputList(pb);
	initList(pc);
	addMutiPloy(pa,pb,pc);
	printList(pc);

	return 0;
}

void initList(linkList &L) {
	L=(linkList)malloc(sizeof(LNode));
	L->next=NULL;
}

void inputList(linkList L) {
	int n;
	double coef;
	int expn;
	scanf("%d",&n);
	for(int i=0; i<n; i++) {
		scanf("%lf %d",&coef,&expn);
		listInsert(L,coef,expn); // 插入时仍然保持线性表有序
	}
}

void listInsert(linkList &L,double coef,int expn) {
	linkList p=(linkList)malloc(sizeof(LNode));
	p->coef=coef;
	p->expn=expn;
	p->next=NULL;
	linkList t=locateElem(L,expn);
	p->next=t->next;
	t->next=p; // 在t指向的结点之后插入p指向的结点
}

linkList locateElem (linkList L,int e) {
	linkList pre,p;
	for(pre=L,p=L->next; p!=NULL; pre=p,p=p->next)
		if(p->expn<e) return pre;
	return pre;
}

void addMutiPloy(linkList pa,linkList pb,linkList pc) {
	linkList p1,p2,p3;
	p1=pa->next;
	p2=pb->next;
	p3=pc;
	while(p1!=NULL && p2!=NULL) {
		if(p1->expn>p2->expn) {
			listInsert(pc, p1->coef, p1->expn);///////////////
			p1 = p1->next;
            p3 = p3->next;/////////////////////
		} else if(p1->expn<p2->expn) {
			listInsert(pc, p2->coef, p2->expn);/////////////////////
			p2 = p2->next;
            p3 = p3->next;//////////////
		} else if(p1->expn==p2->expn) {
			double sum = p1->coef + p2->coef;
			if(sum!=0) {
				listInsert(pc, sum, p1->expn);////////////////////////
                p3 = p3->next;
			}////////////////////////
			p1=p1->next;
			p2=p2->next;
		}
	}
	p3->next=(p1!=NULL?p1:p2); //插入非空多项式的剩余段
}

void printList(linkList L) {
	linkList p = L->next;
	if(p==NULL) printf("%d\n",0);
	else while(p!=NULL) {
			printf("%.1lf %d\n",p->coef,p->expn);
			p = p->next;
		}
}
