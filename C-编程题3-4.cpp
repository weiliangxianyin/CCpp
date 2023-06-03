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
	int t=n;
	int sum=0;
	while(t!=0){
		sum=sum+(t%10)*(t%10)*(t%10);
		t=t/10;
	}
	if(sum==n)return 1;
	else return 0;

}

