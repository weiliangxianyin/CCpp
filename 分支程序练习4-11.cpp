#include <stdio.h>
int main(void){
	int a,b,c,min,max;
	scanf("%d%d%d",&a,&b,&c);
	min=a<b?a:b;
	min=min<c?min:c;
	max=a>b?a:b;
	max=max>c?max:c;
	printf("min=%d,max=%d",min,max);
	
	return 0;
}
