#include <stdio.h>
int main(void){
	double g;
	int t,q,a;
	scanf("%lf%d",&g,&t);

	 if(g<=3){
	 	a=10;
	 	
	 }else if(g<=10){
		a=10+(g-3)*2;

	 }else if(g>10){
	    a=10+(g-3)*2+(g-10)*3;

	 }
	 q=t/5*2+a;
	 printf("%d",q);

	return 0;
}
