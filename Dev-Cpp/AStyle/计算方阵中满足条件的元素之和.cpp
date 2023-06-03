#include <stdio.h>
int main(void) {
	int n;
	scanf("%d",&n);
	int a[n][n];
	int i,j;
	for(i=0; i<n; i++) {
		for(j=0; j<n; j++) {
			scanf("%d",&a[i][j]);
		}
	}
	int sum=0;
	for(i=0; i<n; i++) {
		for(j=0; j<n; j++) {
			if(i!=n-1&&j!=n-1&&i+j!=n-1) {
				sum=sum+a[i][j];
			}
		}
	}
	printf("%d",sum);
	return 0;
}
