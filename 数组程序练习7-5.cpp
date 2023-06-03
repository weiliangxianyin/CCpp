#include <stdio.h>
int b(int n) {
	if(n%2==0) {
		return 0;
	} else
		return 1;
}
int main(void) {
	int n;
	scanf("%d",&n);
	int a[n],i,s=0;
	for(i=0; i<n; i++) {
		scanf("%d",&a[i]);
		s=s+b(a[i]);
	}
	printf("奇数的个数为:%d\n",s);
	int j;
	for(i=0; i<n-1; i++) {
		for(j=i+1; j<n; j++) {
			if(a[i]<a[j]) {
				int t=a[j];
				a[j]=a[i];
				a[i]=t;
			}
		}
	}
	printf("排序后的数组元素:");
	for(i=0; i<n; i++) {
		printf("%d ",a[i]);
	}
	return 0;
}
