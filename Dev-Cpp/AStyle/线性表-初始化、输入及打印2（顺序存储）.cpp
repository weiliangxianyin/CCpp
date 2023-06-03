#include <stdio.h>
#define MAXSIZE 100  // define: 定义常量
#define OK 1
typedef  int  ElemType;  // typedef: 定义类型
typedef  int  Status;
typedef struct {
	ElemType  elem[MAXSIZE];
	int  length;
} SqList;

Status initList(SqList &L);
void inputList(SqList &L);
void printList(SqList L);

int main(void) {
	SqList L;
	initList(L);
	inputList(L);
	printList(L);
	return 0;
}
Status initList(SqList &L) {
	L.length=0;
	return OK;
}
void inputList(SqList &L) {
	int n;
	scanf("%d",&n);
	for(int i=0; i<n; i++) {
		scanf("%d",&L.elem[i]);
	}
	L.length=n;
}
void printList(SqList L) {
	for(int i=0; i<L.length; i++) {
		printf("%d ",L.elem[i]);
	}
}
