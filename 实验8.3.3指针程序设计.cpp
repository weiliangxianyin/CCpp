#include <stdio.h>
int main(void) {
	int i,j,n=5;
	int a[n];
	for(i=0; i<5; i++) {
		scanf("%d",a+i);
	}
	for(i=0; i<n-1; i++) {
		for(j=0; j<n-1-i; j++) {
			if(*(a+j)>*(a+j+1)) {
				int t=*(a+j);
				*(a+j)=*(a+j+1);
				*(a+j+1)=t;
			}
		}
	}
	for(i=0; i<5; i++) {
		printf("%d ",*(a+i));
	}
	return 0;
}
