#include <stdio.h>
void swap(               ) {
	int temp;
	temp=*p;
	*p=*q;

}
int main(void) {
	int a,b;
	scanf("%d%d",&a,&b);
	swap(&a,&b);
	printf("交换后的值为\n");
	printf("a=%d,b=%d\n",a,b);
	return 0;
}
