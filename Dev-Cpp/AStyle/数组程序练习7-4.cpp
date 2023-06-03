#include <stdio.h>
int b(int n) {
	int i;
	for(i=2; i<n; i++) {
		if(n%i==0) {
			break;
		}
	}
	if(i==n) {
		return 1;
	} else return 0;
}
int main(void) {
	int n;
	scanf("%d",&n);
	int a[n],i,count=0;
	for(i=0; i<n; i++) {
		scanf("%d",&a[i]);
		count=count+b(a[i]);
	}

	int j;
	for(i=0; i<n-1; i++) {
		for(j=i+1; j<n; j++) {
			if(a[i]>a[j]) {
				int t=a[j];
				a[j]=a[i];
				a[i]=t;
			}
		}
	}
	printf("最大值为%d,共有%d个素数",a[i],count);
	return 0;
}
