#include <stdio.h>
int main(void) {
	int n;
	scanf("%d",&n);
	int fen5,fen2,fen1,count=0,total=0;
	for(fen5=n/5; fen5>0; fen5--) {
		for(fen2=n/2; fen2>0; fen2--) {
			for(fen1=n; fen1>0; fen1--) {
				if(fen1+fen2*2+fen5*5==n) {
					total=fen1+fen2+fen5;
					printf("fen5:%d,fen2:%d,fen1:%d,total:%d\n",fen5,fen2,fen1,total);
					count++;
				}
			}
		}
	}
	printf("count=%d",count);
	return 0;
}
