#include <stdio.h>
int zhuan(int i,int j,int n);
int main(void) {
	int a[2][3],b[6];
	int i,j;

	for(i=0; i<2; i++) {
		for(j=0; j<3; j++) {
			scanf("%d",&a[i][j]);
		}
	}

	for(int i=0; i<2; i++) {
		for(int j=0; j<3; j++) {
			int k=zhuan(i,j,3);
			b[k]=a[i][j];
		}
	}

	for(i=0; i<6; i++)
		printf("%d ",b[i]);

	return 0;
}

int zhuan(int i,int j,int n) {
	return i*n+j;
}
