#include <stdio.h>
int main(void){
	
    int a,b,c,d,sum=0;
    float average=0;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	sum=a+b+c+d;
	average=sum/4.0;
	printf("%d %.1f",sum,average);
	
	return 0;		
}
