#include <stdio.h>
#include <stdlib.h>
#define  MAXSIZE  100
typedef  int  ElemType;
typedef  int  Status;
typedef  struct {
	ElemType  *elem; // 顺序表数组的基址
	int   length;    // 顺序表当前元素个数
} SqList;
void initList(SqList &L);
void inputList(SqList &L);
void insertList(SqList &L,int i,ElemType e);
void listUnion(SqList &La,SqList Lb);
void sortList(SqList &L);
void printList(SqList L);
int main(void) {
	SqList La,Lb;
	initList(La);
	initList(Lb);
	inputList(La);
	inputList(Lb);
	listUnion(La,Lb);
	sortList(La);
	printList(La);
	return 0;
}
void initList(SqList &L) {
	L.elem=(ElemType*)malloc(MAXSIZE*sizeof(ElemType));
	L.length=0;
}
void inputList(SqList &L) {
	scanf("%d",&L.length);
	for(int i=0; i<L.length; i++) scanf("%d",&L.elem[i]);
}
void insertList(SqList &L,int i,ElemType e) {
	for(int j=L.length-1; j>=i-1; j--) L.elem[j+1]=L.elem[j];
	L.elem[i-1]=e;
	L.length++;
}
int locateElem(SqList L,ElemType e) {
	int i;
	for(i=0; i<L.length; i++)
		if(L.elem[i]==e) break;
	if(i==L.length) return 0;
	else return i+1;
}
void listUnion(SqList &La,SqList Lb) {
	int i,j;
	for(i=0; i<Lb.length; i++) {
		for(j=0; j<La.length; j++) {
			if(Lb.elem[i]==La.elem[j])
				break;

		}
		if(j==La.length) {
			insertList(La,j,Lb.elem[i]);
		}
	}
}

void sortList(SqList &L) {
	int i,j,n;
	n=L.length;
	for(i=0; i<n-1; i++) {
		int index=i;
		for(j=i+1; j<=n-1; j++)
			if(L.elem[index]>L.elem[j]) index=j;
		int t=L.elem[index];
		L.elem[index]=L.elem[i];
		L.elem[i]=t;
	}
}
void printList(SqList L) {
	for(int i=0; i<L.length; i++) printf("%d ",L.elem[i]);
}
