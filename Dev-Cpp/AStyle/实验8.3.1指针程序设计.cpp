#include <stdio.h>
int main(void) {
	int i,a[10],b[10],n;
	scanf("%d",&n);
	for(i=0; i<n; i++) {
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++) {
		scanf("%d",&b[i]);
	}
	for(i=0; i<n; i++) {
		int t=*(a+i);
		*(a+i)=*(b+i);
		*(b+i)=t;
	}
	for(i=0; i<n; i++) {
		printf("%d ",*(a+i));
	}
	printf("\n");
	for(i=0; i<n; i++) {
		printf("%d ",*(b+i));
	}
	printf("\n");
	return 0;
}
