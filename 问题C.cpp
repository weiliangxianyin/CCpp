#include <stdio.h>

int main(void){

    float w,h,BMI;
	scanf("%f%f",&w,&h);
	h=h/100;
    BMI=w/(h*h);
	
	printf("%.2lf",BMI);
	return 0;
}
