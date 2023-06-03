#include <stdio.h>
int main(void){
	int a,i,sum=0,b=1;
	scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
    	b=b*i;
    	sum=sum+b;
	}
	
	printf("%d",sum);
	return 0;
} 
