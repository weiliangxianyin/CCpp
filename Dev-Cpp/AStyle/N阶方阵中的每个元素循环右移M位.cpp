#include <stdio.h>
int main(void) {
	int i,j,m,n;
	scanf("%d%d",&m,&n);
	int a[n][n];
	for(i=0; i<n; i++) {
		for(j=0; j<n; j++) {
			scanf("%d",&a[i][j]);
		}
	}
	int k;
	for(i=0; i<m; i++) {
		for(j=0; j<n; j++) {
			int t=a[j][n-1];
			for(k=n-1; k>0; k--) {
				a[j][k]=a[j][k-1];
			}
			a[j][k]=t;
		}
	}
	for(i=0; i<n; i++) {
		for(j=0; j<n; j++) {
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
