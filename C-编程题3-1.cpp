#include <stdio.h>
int main(void){
	int seats,mileage;
	scanf("%d %d",&seats,&mileage);
	double payment,rate; 
	if(seats<=9)rate=1.6;
	else if(10<=seats&&seats<=19) rate=2.4;
	else if(20<=seats&&seats<=39) rate=3.3;
	else if(40<=seats) rate=4.9;
	payment=mileage*rate;
	printf("payment=%.1lf",payment);
	return 0;
} 
