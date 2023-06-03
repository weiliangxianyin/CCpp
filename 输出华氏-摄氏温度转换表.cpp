#include <stdio.h>
int main(void){
    int l,u;
    double C;
	scanf("%d%d",&l,&u);

	if(l<=u&&u<=100)
	{
	printf("fahr celsius:\n");  
	for(l;l<=u;l=l+2)
	{
    C=5*(l*1.0-32)/9;
	printf("%d%6.1f\n",l,C);
	} 
	}
	else
	{
	printf("Invalid.\n");	
	}
	
    return 0;
}

