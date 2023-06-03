#include <stdio.h>
int main(void) {
	int n;
	scanf("%d\n",&n);
	int i,j,a[n][n];
	for(i=0; i<n; i++) {
		for(j=0; j<n; j++) {
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0; i<n; i++) {
		for(j=0; j<n; j++) {
			printf("%d ",a[j][i]);
		}
		printf("\n");
	}
	return 0;
}
