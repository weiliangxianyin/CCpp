#include "stdio.h"
#include "math.h"
int isprime(int n);
int main() {
	int m,n,count=0;
	scanf("%d",&m);
	for(n=2; n<=m; n++) {
		if(isprime(n)) {
			count++;
		}
	}
	printf("number=%d\n",count);
	return 0;
}
int isprime(int n) {
	for(int i=2;i<n;i++){
		if(n%i==0)
		return 1;
	}
	return 0;
}
