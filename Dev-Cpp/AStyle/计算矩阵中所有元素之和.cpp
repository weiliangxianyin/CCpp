#include <stdio.h>
int main(void) {
	int m,n;
	scanf("%d%d",&m,&n);
	int a[m][n];
	int i,j,sum=0;
	for(i=0; i<m; i++) {
		for(j=0; j<n; j++) {
			scanf("%d",&a[i][j]);
			sum=sum+a[i][j];
		}
	}
	printf("%d",sum);

	return 0;
}
