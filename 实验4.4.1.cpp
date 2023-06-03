#include <stdio.h>
int main(void){
	
	double j;
	scanf("%lf",&j);
	
	if(j<100){
        j=j*0.95;
    }else if(100<=j&&j<200){
    	j=j*0.9;
	}else if(200<=j&&j<500){
		j=j*0.85;
	}else if(500<=j){
		j=j*0.8;
	}
	printf("%.2lf",j);
	
	return 0;
}
