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

linkList locateElem(linkList L, int e) {
	linkList p = L;
	while (p->next && p->next->expn >= e) {
		p = p->next;
	}
	return p;
}

void addMutiPloy(linkList &pa, linkList pb) {
	linkList p = pa->next, q = pb->next, r = pa;
	while (p && q) {
		if (p->expn == q->expn) {
			double sum = p->coef + q->coef;
			if (sum != 0) {
				p->coef = sum;
				r = p;
				p = p->next;
				q = q->next;
			} else {
				r->next = p->next;
				linkList t = p;
				p = p->next;
				free(t);
				t = q;
				q = q->next;
				free(t);
			}
		} else if (p->expn > q->expn) {
			linkList t = q->next;
			q->next = p;
			r->next = q;
			r = q;
			q = t;
		} else {
			r = p;
			p = p->next;
		}
	}
	if (q) r->next = q;
	free(pb);
}

void printList(linkList L) {
	linkList p = L->next;
	if (!p) {
		printf("0\n");
		return;
	}
	while (p) {
		printf("%.1f %d\n", p->coef, p->expn);
		p = p->next;
	}
}

