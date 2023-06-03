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
	printf("最小公倍数为%d, 最大公约数为%d",i,j);
	return 0;
}
