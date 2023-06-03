#include <stdio.h>
int fac(int n);
int sum(int m);
int main(void) {
	int n;
	scanf("%d",&n);
	printf("s=%d",sum(n));
	return 0;
}
int sum(int m) {
	int s=0;
	while(m!=0) {
		s=s+fac(m);
		m--;
	}
	return s;
}
int fac(int n) {
	int s=1;
	while(n!=0) {
		s=s*n;
		n--;
	}
	return s;
}
