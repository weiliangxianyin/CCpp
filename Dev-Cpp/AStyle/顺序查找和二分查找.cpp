#include <stdio.h>
#include <stdlib.h>

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
#define MAXSIZE 100 /* �洢�ռ��ʼ������ */
typedef int Status; /* Status�Ǻ���������,��ֵ�Ǻ������״̬���룬��OK�� */

/* ���ڱ�˳����ң�aΪ���飬a[0]�ÿգ�nΪ������Ԫ�ظ�����keyΪҪ���ҵĹؼ��֣�����ֵ�ǹؼ����������еĴ洢λ�ã�����ʧ�ܷ���0 */
int Sequential_Search(int *a,int n,int key) {
	for (int i = 1; i <= n; i++) {
		if (a[i] == key) return i;
	}
	return 0;
}

/* ���ڱ�˳����� */
int Sequential_Search2(int *a,int n,int key) {
	int i = n;
	a[0] = key;
	while (a[i] != key) {
		i--;
	}
	return i;
}

/* ���ֲ��� */
int Binary_Search(int *a,int n,int key) {
	int low = 1, high = n, mid;
	while (low <= high) {
		mid = (low + high) / 2;
		if (key < a[mid]) high = mid - 1;
		else if (key > a[mid]) low = mid + 1;
		else return mid;
	}
	return -1;
}

int main(void) {
	int a[MAXSIZE + 1], i, result1, result2, result3;
	int key1, key2, key3;
	int arr[MAXSIZE]= {0,1,16,24,35,47,59,62,73,88,99};
	for(i=0; i<=MAXSIZE; i++) {
		a[i]=i;
	}
	scanf("%d",&key1);
	result1=Sequential_Search(a,MAXSIZE,key1);
	printf("Sequential_Search:%d\n",result1);
	scanf("%d",&key2);
	result2=Sequential_Search2(a,MAXSIZE,key2);
	printf("Sequential_Search2:%d\n",result2);
	scanf("%d",&key3);
	result3=Binary_Search(arr,10,key3);
	printf("Binary_Search:%d",result3);
	return 0;
}
