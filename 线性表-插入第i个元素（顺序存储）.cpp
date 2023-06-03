#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 100
typedef  int  ElemType;
typedef struct {
	ElemType  *elem;  //Ҫ���ڳ�ʼ��������ʹ�ö�̬�洢���䷽����elem��ֵ
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
//��̨���ṩ 
}
void inputList(SqList &L) {
//��̨���ṩ 	
}
void printList(SqList L) {
	for(int i=0; i<L.length; i++) printf("%d ",L.elem[i]);
}
/*���ύ���´���*/
void insertList(SqList &L,int i,ElemType e) {
	for(int j=L.length-1;j>=i-1;j--){
		L.elem[j+1]=L.elem[j];
	} 
	L.elem[i-1]=e;
	L.length++;
} 
