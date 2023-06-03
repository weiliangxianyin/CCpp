#include <stdio.h>
int main(void){
	
	double t,s,b;
	
	scanf("%lf%lf",&t,&s);
	
	b=t/s/s;
	
	if(18.5<=b&&b<=23.9){
		printf("normal");
	} else if(23.9<b&&b<=28){
		printf("fat");
	} else if(b>28){
		printf("too fat");
	}
	
	return 0;
}
