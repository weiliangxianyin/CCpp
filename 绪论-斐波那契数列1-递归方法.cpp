#include <stdio.h>

double fib(int n);
int main(void) {
	int n;
	scanf("%d",&n);
	printf("fib(%d)=%.0lf",n,fib(n));
	return 0;
}
/*�ύ���´���*/
double fib(int n) {
	if(n==1||n==2)return 1;
	else return fib(n-1)+fib(n-2);
}
