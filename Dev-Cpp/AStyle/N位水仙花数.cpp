#include <stdio.h>
#include <math.h>
int main(void) {
	int n;
	scanf("%d",&n);
	int a,b,sum=0;
	a=pow(10,n-1);
	b=pow(10,n);
	for(; a<b; a++) {
		int x,y=0;
		for(x=a; x>0; x=x/10) {
			y=x%10;
			sum+=pow(y,n);
		}
		if(sum==a) {
			printf("%d\n",a);
		}
		sum=0;
	}
	return 0;
}
