#include <stdio.h>
int main(void){
	int b=1,a;
	scanf("%d",&a);
	while(a>0){
	b=b*a;
	a=a-1;
	}
	printf("%d",b);
	return 0;
}
