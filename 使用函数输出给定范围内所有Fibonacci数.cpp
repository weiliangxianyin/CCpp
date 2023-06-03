#include <stdio.h>
int fib( int n );
void PrintFN( int m, int n );
int main() {
	int m, n, t;
	scanf("%d %d %d", &m, &n, &t);
	printf("fib(%d) = %d\n", t, fib(t));
	PrintFN(m, n);
	return 0;
}
int fib( int n ) {
	int i,a=1,b=1,c=1;
	if(n==1||n==2)return 1;
	else {
		for(i=3; i<=n; i++) {
			c=b;
			b=a+b;
			a=c;
		}
		return b;
	}
}
void PrintFN( int m, int n ) {
	int i=2,a=0;
	for(; i<=n; i++) {
		if(m<=fib(i)&&fib(i)<=n) {
			printf("%d ",fib(i));
			a=1;
		}
	}
	if(a==0)printf("No Fibonacci number");
}

