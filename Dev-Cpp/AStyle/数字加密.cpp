#include <stdio.h>
int main(void) {
	int x,i=0;
	scanf("%d",&x);
	int a[3];
	a[0]=x/1000;
	a[1]=x/100%10;
	a[2]=x/10%10;
	a[3]=x%10;
	for(; i<=3; i++) {
		a[i]=(a[i]+9)%10;
	}
	int m=a[0],n=a[1],s=0;
	a[0]=a[2];
	a[1]=a[3];
	a[2]=m;
	a[3]=n;
	s=a[0]*1000+a[1]*100+a[2]*10+a[3];
	printf("The encrypted number is %d",s);
	return 0;
}
