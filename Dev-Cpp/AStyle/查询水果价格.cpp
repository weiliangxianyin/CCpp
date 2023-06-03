#include <stdio.h>
int main(void) {
	printf("[1] apple\n[2] pear\n[3] orange\n[4] grape\n[0] exit\n");
	int n,a=1;
	for(; a<=5; a++) {
		scanf("%d",&n);
		if(n==0)break;
		for(; a>0; a--) {
			if(n==1)printf("price = 3.00\n");
			else if(n==2)printf("price = 2.50\n");
			else if(n==3)printf("price = 4.10\n");
			else if(n==4)printf("price = 10.20\n");
			else printf("price = 0.00\n");
		}
	}
	return 0;
}
