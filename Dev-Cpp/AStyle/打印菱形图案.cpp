#include<stdio.h>
int main(void) {
	int n,i,a;
	scanf("%d",&n);
	for(i=1; i<=n/2+1; i++) {
		for(a=1; a<=n+1-2*i; a++) {
			printf(" ");
		}
		for(a=1; a<=2*i-1; a++) {
			printf("* ");
		}
		printf("\n");
	}
	for(i=1; i<=n/2; i++) {
		for(a=1; a<=2*i; a++) {
			printf(" ");
		}
		for(a=1; a<=n-2*i; a++) {
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
