#include <stdio.h>
#include <math.h>
int main(void){
	double a;
	scanf("%lf",&a);
	if(a<60){
		a=sqrt(a)*10;
	}
	printf("%.1lf",a);
	
	return 0;
}
