#include "stdio.h"
int count(int n) ;
int main() {
	int m;
	scanf("%d",&m);
	printf("count=%d\n",count(m));
	return 0;
}
int count(int n) {
	int count=0;
	if(n<=20)return 0;
	else {
		int i=0,j=0,k=0;
		for(i=1; i*10<=n; i++) {
			for(j=1; i*10+j*5<=n; j++) {
				for(k=1; i*10+j*5+k<=n; k++) {
					if(i*10+j*5+k==n)count++;

				}
			}
		}

		return count;

	}
}
