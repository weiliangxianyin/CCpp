#include <stdio.h>
int main(void) {
	int m,n;
	double sum=0,i;
	scanf("%d %d",&m,&n);
	for(i=m; i<=n; i++) {
		sum+=i*i+1/i;
	}
	printf("sum = %lf",sum);
	return 0;
}
