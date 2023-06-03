#include <stdio.h>

#define MAXSIZE 100

typedef int elemType;

typedef struct {
	elemType *base;
	elemType *top;
	int stacksize;
} sqStack;

void init(sqStack &s);
void push(sqStack &s, int e);
void pop(sqStack &s, int &e);
void convert(sqStack &s, int n);
void output(sqStack s);

int main(void) {
	int n;
	sqStack s;
	init(s);
	scanf("%d",&n);
	convert(s,n);
	output(s);
	return 0;
}

void init(sqStack &s) {
	s.base=new elemType[MAXSIZE];
	s.top=s.base;
	s.stacksize=MAXSIZE;
}

void push(sqStack &s, int e) {
	//平台已提供
}

void pop(sqStack &s, elemType &e) { //出栈
	//平台已提供
}

void output(sqStack s) {
	elemType x;
	while(s.top!=s.base) {
		pop(s,x);
		printf("%d",x);
	}
	printf("\n");
}
/*仅提交以下代码*/
void convert(sqStack &s, elemType n) { //十进制数转八进制数
	if(n==0){
		push(s,0);
	} 
	while(n!=0){
		int r=n%8;
		push(s,r);
		n=n/8;
	}
}
