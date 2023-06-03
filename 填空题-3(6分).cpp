#include <stdio.h>
void swap(int *p,int *q) {
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
}
int main(void) {
	int a,b;
	scanf("%d%d",&a,&b);
	swap(&a,&b);
	printf("交换后的值为\n");
	printf("a=%d,b=%d\n",a,b);
	return 0;
}
