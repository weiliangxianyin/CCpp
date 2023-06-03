#include "stdio.h"
#include "math.h"
int main() {
	int i,n;
	scanf("%d",&n);
	for(i=2; i<=sqrt(n); i++) {
		if(n%i==0)  break;         /*ERROR*/
	}
	if(i>sqrt(n))                       /*ERROR*/
		printf("Yes\n");
	else
		printf("No\n");
	return 0;
}

