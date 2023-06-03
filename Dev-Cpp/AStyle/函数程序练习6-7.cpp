#include <stdio.h>
int fact(int n);
int sum(int m);
int main(void) {
	int n;
	scanf("%d",n);
	printf("s=%d",sum(n));
	return 0;
}
int sum(int n) {
	int s=0;
	while(n>0) {
		s=s+fact(n);
		n--;
	}
	return s;
}
int fact(int n) {
	int s=1;
	while(n>0) {
		s=s*n;
		n--;
	}
	return s;
}
