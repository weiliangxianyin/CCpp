#include <stdio.h>
void swap1(int *a,int *b);
void swap2(int &a,int &b);
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
void swap1(int *a,int *b) {
	int t;
	t=*a;
	*a=*b;
	*b=t;
}

void swap2(int &a,int &b) {
	int t;
	t=a;
	a=b;
	b=t;
}
