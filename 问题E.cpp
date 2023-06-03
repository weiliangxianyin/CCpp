#include <stdio.h>
int main(void){
    int a,b,c,d,h;
    double p;
    
    scanf("%d%d%d%d",&a,&b,&c,&d);
    h=a+b+c+d;
    p=h/4.0;
    printf("%d %.1lf",h,p);
	
	return 0;
}
