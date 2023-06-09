#include <stdio.h>
#include <stdlib.h>
#define  MAXSIZE  100
typedef  int  ElemType;
typedef  struct {
	ElemType  *elem;    // 顺序表数组的基址
	int   length;              // 顺序表当前元素个数
} SqList;
void initList(SqList &L);
void inputList(SqList &L);
void printList(SqList L);
void listDelete(SqList &La,ElemType e);
int main(void) {
	SqList La;
	ElemType x;
	initList(La);
	inputList(La);
	scanf("%d",&x); // 输入要删除的值
	listDelete(La,x);
	printList(La);
	return 0;
}
void initList(SqList &L) {
	L.elem=(ElemType*)malloc(MAXSIZE*sizeof(ElemType));
	L.length=0;
}

void listDelete(SqList &La,ElemType e) {
	int k=0;
	for(int i=0; i<La.length; i++) {
		if(La.elem[i]!=e) {
			La.elem[k]=La.elem[i];
			k++;
		}

	}
	La.length=k;
}

void inputList(SqList &L) {
	scanf("%d",&L.length);
	for(int i=0; i<L.length; i++) scanf("%d",&L.elem[i]);
}
void printList(SqList L) {
	for(int i=0; i<L.length; i++) printf("%d ",L.elem[i]);
}
