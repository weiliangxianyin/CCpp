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
//后台已提供 
}
void inputList(SqList &L) {
//后台已提供 
}
/*仅提交以下代码*/
int locateList(SqList L,ElemType e) {
	for(int i=0;i<L.length;i++){
		if(L.elem[i]==e){
			return i+1;
			break;
		}
	}
	return 0;
}
