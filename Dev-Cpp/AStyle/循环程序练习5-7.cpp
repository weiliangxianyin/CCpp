#include <stdio.h>
int main(void) {
	int a,b;
	scanf("%d%d",&a,&b);
	int i=a,j=b,min,max;
	for(;; i++) {
		if(i%b==0&&i%a==0) {
			break;
		}
	}
	for(;; j--) {
		if(a%j==0&&b%j==0) {
			break;
		}
	}
	printf("��С������Ϊ%d, ���Լ��Ϊ%d",i,j);
	return 0;
}
