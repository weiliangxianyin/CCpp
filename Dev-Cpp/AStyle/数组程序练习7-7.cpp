#include <stdio.h>
int main(void) {
	int n,i,j;
	scanf("%d",&n);
	int a[n][n];
	printf("\n");
	for(i=0; i<n; i++) {
		a[i][0]=1;
		a[i][i]=1;
	}
	for(i=2; i<n; i++)
		for(j=1; j<i; j++)
			a[i][j]=a[i-1][j-1]+a[i-1][j];
	for(i=0; i<n; i++) {
		for(j=0; j<=i; j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
	return 0;
}

