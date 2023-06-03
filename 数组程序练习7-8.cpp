#include <stdio.h>
int main(void) {
	int a[4][4];
	int i,j;
	for(i=0; i<4; i++) {
		for(j=0; j<4; j++) {
			scanf("%d",&a[i][j]);
		}
	}
	int s=0;
	for(i=0; i<4; i++) {
		s=s+a[i][i]+a[i][3-i];
	}
	printf("sum=%d",s);
	return 0;
}
