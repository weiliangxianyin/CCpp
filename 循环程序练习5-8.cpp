#include <stdio.h>
int main(void) {
	int m,n,i,a=0;
	scanf("%d,%d",&m,&n);
	for(; m<=n; m++) {
		for(i=2; i<=m-1; i++) {
			if(m%i==0) {
				break;
			}
		}
		if(m==i&&m%10==7) {
			printf("%d ",m);
		}
	}
	return 0;
}
