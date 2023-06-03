#include <stdio.h>
int main(void) {
	int n,m=3;
	scanf("%d", &n);
	int a[n];
	for(int i=0; i<n; i++) {
		a[i]=0;
	}
	int count=0;
	int i=-1;
	int num=0;
	while(1) {
		i=(i+1)%n;
		if(a[i]==0) {
			num++;
			if(num==m) {
				a[i]=1;
				count++;
				if(count==n-1)break;
				num=0;
			}
		}
	}
	for(int i=0; i<n; i++) {
		if(a[i]==0) printf("%d\n",i+1);
	}
	return 0;
}
