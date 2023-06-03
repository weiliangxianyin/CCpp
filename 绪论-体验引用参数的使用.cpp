#include <stdio.h>
void swap1(int *a,int *b);
void swap2(int &a,int &b);
int main(void) { // 分析两个交换函数的不同
	int a, b;
	scanf("%d%d",&a,&b);
	swap1(&a,&b);
	printf("%d %d\n",a,b);
	swap2(a,b);
	printf("%d %d\n",a,b);
	return 0;
}
/*提交以下代码*/
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
