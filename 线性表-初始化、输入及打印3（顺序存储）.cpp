#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 100
#define OK 1
#define OVERFLOW -2
typedef  int  ElemType;
typedef  int  Status;
typedef struct {
	ElemType  *elem;  //要求在初始化函数中使用动态存储分配方法给elem赋值
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
	L.elem=(ElemType*)malloc(MAXSIZE*sizeof(ElemType));
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
