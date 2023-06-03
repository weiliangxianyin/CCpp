#include <stdio.h>
int main(void) {
	int x;
	scanf("%d",&x);
	int q=x,h=0;
	while(x!=0) {
		h=h*10+x%10;
		x=x/10;
	}
	if(q==h)printf("Yes");
	else printf("No");
	return 0;
}
