#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 20   // һ������ʾ����С˳������󳤶�
typedef int KeyType; //����ؼ�������Ϊ����
typedef struct {
	int key;
} RedType;
typedef struct {
	//˳�������
	RedType r[MAXSIZE + 1]; //r[0]���û������ڱ���Ԫ
	int length;             //˳�����
} Sqlist;

int Partition(Sqlist &L, int low, int high);
void QSort(Sqlist &L, int low, int high);

int main() {
	Sqlist L;
	int i, low, high;
	scanf("%d", &L.length);
	for (i = 1; i <= L.length; i++)
		scanf("%d", &L.r[i].key);
	low = 1;
	high = L.length;
	QSort(L, low, high);
	for (i = 1; i <= L.length; i++) {
		printf("%d\t", L.r[i].key);
	}
	printf("\n");
	return 0;
}
/*�ύ���´���*/
int Partition(Sqlist &L, int low, int high) {
	RedType x;
	x=L.r[low];
	int i=low,j=high;
	while(i<j) {
		while(i<j&&L.r[i].key<=x.key)i++;
		while(i>j&&L.r[j].key>x.key)j++;
		if(i<=j) {
			RedType t;
			t=L.r[i];
			L.r[i]=L.r[j];
			L.r[j]=t;
		}
	}
	L.r[low]=L.r[j];
	L.r[j]=x;
	return j;
}
void QSort(Sqlist &L, int low, int high) {
	if(low<high) {
		int index=Partition(L,low,high);
		QSort(L,low,--index);
		QSort(L,++index,high);
	}
}
