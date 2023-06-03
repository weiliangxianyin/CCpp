#include <stdio.h>
#define MAXN 103
void ArrayShift( int a[], int n, int m ) {
	int i,j;
	for(i=0; i<m; i++) {
		int t=a[n-1];
		for(j=n-2; j>=0; j--) {
			a[j+1]=a[j];
		}
		a[0]=t;
	}
}
int main(void) {
	int a[MAXN], n, m;
	int i;
	scanf("%d %d", &n, &m);
	for ( i = 0; i < n; i++ ) scanf("%d", &a[i]);
	ArrayShift(a, n, m);
	for ( i = 0; i < n; i++ ) {
		if (i != 0) printf(" ");
		printf("%d", a[i]);
	}
	printf("\n");
	return 0;
}
