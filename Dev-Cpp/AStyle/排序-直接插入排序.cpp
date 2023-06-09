#include <stdio.h>
#define MAXSIZE 20
typedef struct {
	int key;
} RedType;
typedef struct {//顺序表类型
	RedType r[MAXSIZE + 1]; //r[0]闲置或用作哨兵单元
	int length;             //顺序表长度
} SqList;

void InsertSort(SqList &L);
int main(void) {
	SqList L;
	int i;
	scanf("%d", &L.length);
	for (i = 1; i <= L.length; i++)
		scanf("%d", &L.r[i].key);
	InsertSort(L);
	for (i = 1; i <= L.length; i++)
		printf("%d ", L.r[i].key);
	return 0;
}

void InsertSort(SqList &L) {
	int i,j;
	for(i=2; i<=L.length; ++i ) {
		int temp=L.r[i].key;
		j=i-1;
		while(j>0&&L.r[j].key>temp) {
			L.r[j+1].key=L.r[j].key;
			j--;
		}
		L.r[j+1].key=temp;
	}
}
