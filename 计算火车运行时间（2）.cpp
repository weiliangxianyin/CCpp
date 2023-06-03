#include <stdio.h>
int main(void){
	int x,y,x1,x2,y1,y2,a,b;
	
	scanf("%d%d",&x,&y);
	x1=x/100;
	x2=y/100;
	y1=x%100;
	y2=y%100;
	a=x2-x1;
	b=y2-y1;
	if(b<0){
		b=b+60;
		a=a-1;
	}
	printf("%02d:%02d\n",a,b);
	
	return 0;
} 
