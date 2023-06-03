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
void insertList(SqList &L,int i,ElemType e);
void printList(SqList L);

int main(void) {
	int i,e;
	SqList L;
	initList(L);
	inputList(L);
	scanf("%d %d",&i,&e);
	insertList(L,i,e);
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
void insertList(SqList &L,int i,ElemType e) {
	for(int j=L.length-1;j>=i-1;j--){
		L.elem[j+1]=L.elem[j];
	} 
	L.elem[i-1]=e;
	L.length++;
} 
