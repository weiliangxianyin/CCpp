#include "stdio.h"

#define MAXSIZE 100

typedef int elemType;

typedef struct {
	elemType *base;
	elemType *top;
	int stacksize;
} sqStack;

void init(sqStack &s);
void push(sqStack &s, elemType x);
void input(sqStack &s);
void output(sqStack s);

int main(void) {
	sqStack s;
	init(s);
	input(s);
	output(s);
	return 0;
}

void init(sqStack &s) {
	s.base = new elemType[MAXSIZE];
	s.top = s.base;
	s.stacksize = MAXSIZE;
}

void push(sqStack &s, elemType x) {
	if(s.top-s.base==s.stacksize)break;
	else {
		*s.top = x;
		s.top++;
	}
}

void input(sqStack &s) {
	int n;
	elemType x;
	scanf("%d",&n);
	for(int i=1; i<=n; i++) {
		scanf("%d",&x);
		push(s,x);
	}
}

void output(sqStack s) {
	for(int *p=s.top-1; p>=s.base; p--) {
		printf("%d ", *p);
	}
}
