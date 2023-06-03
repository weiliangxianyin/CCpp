#include <stdio.h>

long long fib(int n);
int main(void) {
	int n;
	scanf("%d",&n);
	printf("fib(%d)=%lld",n,fib(n));
	return 0;
}
/*提交以下代码*/

long long fib(int n) {
	if(n==1||n==2)return 1;
	long long a=1,b=1,c;
	for(int i=3;i<=n;i++){
		c=a+b;
		a=b;
		b=c;
	}
	return b;
}
