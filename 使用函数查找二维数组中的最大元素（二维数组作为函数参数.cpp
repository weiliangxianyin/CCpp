#include <stdio.h>
int f(int a[],int m,int n);
int main() {
	int m,n;
	scanf("%d %d",&m,&n);
	int i,j,a[m][n];
	for(i=0; i<m; i++) {
		for(j=0; j<n; j++) {
			scanf("%d",&a[i][j]);
		}
	}
	int max=f(&a[0][0],m,n);
	printf("%d\n",max);
	return 0;
}
int f(int a[],int m,int n){
	int i,j;
	int *t=a;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(*t<a[i*n+j]){
				*t=a[i*n+j];
			}
		}
	}
	return *t;
}
