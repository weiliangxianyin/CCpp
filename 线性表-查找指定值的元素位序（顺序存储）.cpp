#include <stdio.h>
#include <stdlib.h>
#define  MAXSIZE  100
typedef  int  ElemType;
typedef  struct {
	ElemType  *elem; // ˳�������Ļ�ַ
	int   length;    // ˳���ǰԪ�ظ���
} SqList;
void initList(SqList &L);
void inputList(SqList &L);
int locateList(SqList L,ElemType e);
int main(void) {
	SqList La;
	initList(La);
	inputList(La);
	ElemType e;
	scanf("%d",&e);
	printf("%d",locateList(La,e));
	return 0;
}
void initList(SqList &L) {
//��̨���ṩ 
}
void inputList(SqList &L) {
//��̨���ṩ 
}
/*���ύ���´���*/
int locateList(SqList L,ElemType e) {
	for(int i=0;i<L.length;i++){
		if(L.elem[i]==e){
			return i+1;
			break;
		}
	}
	return 0;
}
