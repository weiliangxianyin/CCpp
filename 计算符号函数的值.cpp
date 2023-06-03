#include <stdio.h>
int main(void){
	int n,a;
	scanf("%d",&n);
	if(n<0){
		a=-1;

	}else if(n==0){
		a=0;

	}else if(n>0){
		a=1;
    }
	printf("sign(%d)=%d",n,a); 
	return 0;
}
