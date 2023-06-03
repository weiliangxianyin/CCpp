#include <stdio.h>
int main(void){
	int a,b,c,max,min;
	scanf("%d%d%d",&a,&b,&c);
	max=a>b?a:b;
	max=max>c?max:c;
	min=a<b?a:b;
	min=min<c?min:c;
	printf("min=%d,max=%d",min,max);
	
	return 0;
}
