#include "stdio.h"
int Isnarcissisti_number(int n);
int main() {
	int m,i,count=0;
	scanf("%d",&m);
	for(i=2; i<=m; i++) {
		if(Isnarcissisti_number(i)==1) {
			count++;
		}
	}
	printf("count=%d\n",count);
	return 0;
}
int Isnarcissisti_number(int n) {



}
