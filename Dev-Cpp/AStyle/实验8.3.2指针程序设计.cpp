#include <stdio.h>
int main(void) {
	int i,a[10],n;
	scanf("%d",&n);
	int *p=a;
	for(i=0; i<n; i++,p++) {
		scanf("%d",p);
	}
	p=p-1;
	for(i=0; i<n; i++,p--) {
		printf("%d ",*p);
	}
	return 0;
}
