#include<stdio.h>
int main(void) {
	int i,j,k,f=0,m,n;
	int a[4][4];
	int x[4],y[4];
	for(i=0; i<4; i++) {
		for(j=0; j<4; j++) {
			scanf("%d",&a[j][i]);
		}
	}
	for(i=0,k=0; i<4; i++,k++) {
		n=a[i][0];
		for(j=0; j<4; j++) {
			if(a[i][j]>n) {
				n=a[i][j];
			}
		}
		x[k]=n;
	}
	for(j=0,k=0; j<4; j++,k++) {
		m=a[0][j];
		for(i=0; i<4; i++) {
			if(a[i][j]<m) {
				m=a[i][j];
			}
		}
		y[k]=m;
	}
	for(i=0; i<4; i++) {
		for(j=0; j<4; j++) {
			if(x[i]==y[j]) {
				printf("%d-%d-%d",j,i,x[i]);
				f=1;
				break;
			}
		}
	}
	if(f==0) {
		printf("Not Found");
	}
	return 0;
}
