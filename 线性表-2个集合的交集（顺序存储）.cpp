#include <stdio.h>
#include <stdlib.h>
#define  MAXSIZE  100
typedef  int  ElemType;
typedef  struct {
	ElemType  *elem; // 顺序表数组的基址
	int   length;    // 顺序表当前元素个数
} SqList;
void initList(SqList &L);
void inputList(SqList &L);
void deleteList(SqList &L,int i);
void listIntersection(SqList &La,SqList Lb);
void sortList(SqList &L);
void printList(SqList L);
int main(void) {
	SqList La,Lb;
	initList(La);
	initList(Lb);
	inputList(La);
	inputList(Lb);
	listIntersection(La,Lb);
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
void deleteList(SqList &L,int i) {
	for(int j=i; j<L.length; j++) L.elem[j-1]=L.elem[j];
	L.length--;
}
int locateElem(SqList L,ElemType e) {
	int i;
	for(i=0; i<L.length; i++)
		if(L.elem[i]==e) break;
	if(i==L.length) return 0;
	else return i+1;
}
void listIntersection(SqList &La,SqList Lb) {
	int i=0;
	for(; i<La.length; i++) {
		ElemType t=La.elem[i];
		if(locateElem(Lb,t)==0) {
			deleteList(La,i+1);
			i--;
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
