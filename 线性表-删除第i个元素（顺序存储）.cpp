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
//��̨���ṩ 
}
void inputList(SqList &L) {
//��̨���ṩ 
}
void printList(SqList L) {
	for(int i=0; i<L.length; i++) printf("%d ",L.elem[i]);
}
/*���ύ���´���*/
void deleteList(SqList &L,int i) {
	for(int j=i-1;j<L.length-1;j++){
		L.elem[j]=L.elem[j+1];	
	}
	L.length--;
}
