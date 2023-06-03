#include <stdio.h>
int main(void){
	
	int a,b,c,d,e,f,g;	
	scanf("%d%d",&a,&b);
	c=a/100*60+a%100;
	d=b/100*60+b%100;
	e=d-c;
	f=e/60;
	g=e-f*60;
	if(f<10){
			printf("%02d:%d\n",f,g);
	}
	else    printf("%d:%d\n",f,g);
	  
    return 0;
} 
