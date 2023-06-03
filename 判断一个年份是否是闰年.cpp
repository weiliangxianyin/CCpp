#include <stdio.h>
int main(void){
	
	int n,a;
	scanf("%d",&n);
	if(n%100==0&&n%400!=0)
	{a=0;}
	else if(n%4==0)
	{a=1;}  
	else
	{a=0;}  
	printf("%d",a);
	return 0;
}
