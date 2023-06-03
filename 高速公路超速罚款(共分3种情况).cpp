#include <stdio.h>
int main(void) {
	double c,x,f;
	scanf("%lf %lf",&c,&x);
		
	f=(c-x)/x*100;
	if(c<=1.1*x){
		printf("OK");
		
	}else if(c<=1.5*x){
		printf("Exceed %.0lf%%.Ticket 200",f);
	
	}else if(c>1.5*x){
	    printf("Exceed %.0lf%%.License Revoked",f);
	}
	
	
	return 0;
}
