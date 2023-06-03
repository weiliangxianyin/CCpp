#include <stdio.h>
double fact( int n );
double factsum( int n );
int main(void) {
	int n;
	scanf("%d",&n);
	printf("fact(%d) = %.0f\n", n, fact(n));
	printf("sum = %.0f\n", factsum(n));
	return 0;
}
double fact(int n) {
	if(n==1)return 1;
	else return n*fact(n-1);
}
double factsum( int n ) {
	if(n==0||n==1)return n;
	else return factsum(n-1)+fact(n);
}
