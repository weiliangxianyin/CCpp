#include <stdio.h>
struct sqList { //静态分配存储空间
	int  elem[100];
	int  length;
};
typedef struct sqList SqList; // typedef: 类型定义
void initList(SqList &L);
void inputList(SqList &L);
void printList(SqList L);
int main(void) {
	SqList L;
	initList(L);
	inputList(L);
	printList(L);
	return 0;
}
void initList(SqList &L) {
	L.length=0;
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
