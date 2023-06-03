#include <stdio.h>
#include <stdlib.h>
#define  MAXSIZE  100
//假设建立有序表时输入的数据已经有序
typedef  int  ElemType;
typedef  struct {
	ElemType  *elem; // 顺序表数组的基址
	int   length;    // 顺序表当前元素个数
} SqList;
void initList(SqList &L);
void inputList(SqList &L);
void mergeList(SqList La,SqList Lb,SqList &Lc);
void printList(SqList L);
int main(void) {
	SqList La,Lb,Lc;
	initList(La);
	initList(Lb);
	inputList(La);
	inputList(Lb);
	initList(Lc);
	mergeList(La,Lb,Lc);
	printList(Lc);
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
void mergeList(SqList La,SqList Lb,SqList &Lc) {
	int i=0,j=0,k=0;
	Lc.length=La.length+Lb.length;
	while(i<La.length && j<Lb.length) {
		int s=La.elem[i];
		int t=Lb.elem[j];
		if(s<=t) {
			Lc.elem[k]=s;
			i++;
			k++;
		} else {
			Lc.elem[k]=t;
			i++;
			k++;
		}
	}
	while(i<La.length) {
		Lc.elem[k]=La.elem[i];
		i++;
		k++;
	}
	while(j<Lb.length) {
		Lc.elem[k]=Lb.elem[j];
		j++;
		k++;
	}
}
void printList(SqList L) {
	for(int i=0; i<L.length; i++) printf("%d ",L.elem[i]);
}
