#include <stdio.h>
void swap1(int *x,int *y);
void swap2(int &x,int &y);
int main(void) { // �����������������Ĳ�ͬ
	int a, b;
	scanf("%d%d",&a,&b);
	swap1(&a,&b);
	printf("%d %d\n",a,b);
	swap2(a,b);
	printf("%d %d\n",a,b);
	return 0;
}
/*�ύ���´���*/
void swap1(int *x,int *y) {// ����ַ

}

void swap2(int &x,int &y) {// ����

}
