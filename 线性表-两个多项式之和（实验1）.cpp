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
linkList locateElem(linkList L, int e);
void listInsert(linkList &L, double coef, int expn);
void addMutiPloy(linkList &pa, linkList pb);
void printList(linkList L);

int main(void) {
	linkList pa, pb;
	int n, i, expn;
	double coef;
	initList(pa);
	initList(pb);
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%lf%d", &coef, &expn);
		listInsert(pa, coef, expn);
	}
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%lf%d", &coef, &expn);
		listInsert(pb, coef, expn);
	}
	addMutiPloy(pa, pb);
	printList(pa);
	return 0;
}

Status initList(linkList &L) {
	L = (linkList)malloc(sizeof(LNode));
	if (!L) exit(OVERFLOW);
	L->next = NULL;
	return OK;
}

void listInsert(linkList &L, double coef, int expn) {
	linkList p = (linkList)malloc(sizeof(LNode));
	if (!p) exit(OVERFLOW);
	p->coef = coef;
	p->expn = expn;
	p->next = NULL;
	linkList t = locateElem(L, expn);
	p->next = t->next;
	t->next = p;
}
/*仅提交以下代码*/
linkList locateElem (linkList L,int e) {
    linkList pre,p;
    for(pre=L,p=L->next; p!=NULL; pre=p,p=p->next)
        if(p->expn<e) return pre;
    return pre;
}
 
void addMutiPloy(linkList &pa,linkList pb) {
    linkList p1,p2,p3;
    p1=pa->next;
    p2=pb->next;
    p3=pa;
    while(p1!=NULL && p2!=NULL) {
        if(p1->expn>p2->expn) {
        linkList r;
        r = new LNode;
        p3->next = r;
        r->coef = p1->coef;
        r->expn = p1->expn;
        p3 = r;
        p1 = p1->next;
             
        } else if(p1->expn<p2->expn) {
        linkList r;
        r = new LNode;
        p3->next = r;
        r->coef = p2->coef;
        r->expn = p2->expn;
        p3 = r;
        p2 = p2->next;
 
        } else if(p1->expn==p2->expn) {
            double sum = p1->coef + p2->coef;
            linkList r;
            if(sum!=0) {
                r = new LNode;
                p3->next = r;
                r->coef = sum;
                r->expn = p2->expn;
                p1 = p1->next;
                p2 = p2->next;
                p3 = r;
 
            } else {
                p1 = p1->next;
                p2 = p2->next;
            }
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

