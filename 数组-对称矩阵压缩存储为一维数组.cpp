#include <stdio.h>
#define  maxsize  10
int zhuan(int i,int j,int n);
int main(void) {
	int a[maxsize][maxsize],b[100];
	int n,i,j;

	scanf("%d",&n);
	for(i=0; i<n; i++) {
		for(j=0; j<n; j++) {
			scanf("%d",&a[i][j]);
		}
	}

	for(i=0; i<n; i++) {
		for(j=0; j<=i; j++) {
			int k=zhuan(i,j,n);
			b[k]=a[i][j];
		}
	}

	for(i=0; i<n*(n+1)/2; i++) {
		printf("%d ",b[i]);
	}

	return 0;
}
int zhuan(int i,int j,int n) {
	return i*(i+1)/2+j; 
}
