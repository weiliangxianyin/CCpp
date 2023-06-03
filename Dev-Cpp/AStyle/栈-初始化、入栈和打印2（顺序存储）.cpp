#include <stdio.h>

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
void pop(sqStack &s, elemType &x);
void output(sqStack s);

int main(void) {
	sqStack s;
	init(s);
	input(s);
	output(s);
	return 0;
}

void init(sqStack &s) {
	s.base=new elemType[MAXSIZE];
	s.top=s.base;
	s.stacksize=MAXSIZE;
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

/*仅提供以下代码*/
void push(sqStack &s, elemType x) {
	if(s.top-s.base==s.stacksize) {
		printf("stack is full!\n");
	} else {
		*(s.top++) = x;
	}
}

void pop(sqStack &s, elemType &e) {
	if(s.top==s.base) {
		printf("stack is empty!\n");
	} else {
		e = *(--s.top);
	}
}

void output(sqStack s) {
	elemType x;
	while(s.top!=s.base) {
		pop(s, x);
		printf("%d ", x);
	}
}
