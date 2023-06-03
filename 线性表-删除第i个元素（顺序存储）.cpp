#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 100
typedef  int  ElemType;
typedef struct {
	ElemType  *elem;  //要求在初始化函数中使用动态存储分配方法给elem赋值
	int  length;
} SqList;

void initList(SqList &L);
void inputList(SqList &L);
void deleteList(SqList &L,int i);
void printList(SqList L);

int main(void) {
	int i,e;
	SqList L;
	initList(L);
	inputList(L);
	scanf("%d",&i);
	deleteList(L,i);
	printList(L);
	return 0;
}

void initList(SqList &L) {
//后台已提供 
}
void inputList(SqList &L) {
//后台已提供 
}
void printList(SqList L) {
	for(int i=0; i<L.length; i++) printf("%d ",L.elem[i]);
}
/*仅提交以下代码*/
void deleteList(SqList &L,int i) {
	for(int j=i-1;j<L.length-1;j++){
		L.elem[j]=L.elem[j+1];	
	}
	L.length--;
}
