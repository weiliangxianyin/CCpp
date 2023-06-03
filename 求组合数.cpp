#include <stdio.h>
int main(void){
    int m,n,sum;
    int a=1,b=1,c=1,m1=1,m2=1,m3=1;

    scanf("%d%d",&m,&n);
    for(a=1;a<=m;a++)
	{
    m1=m1*a;
	
	}
    for(b=1;b<=n;b++)
	{
    m2=m2*b;
	
	}	
    for(c=1;c<=(n-m);c++)
	{
    m3=m3*c;
	
	}    
    sum=m2/(m1*m3);
    printf("result = %d",sum);
	return 0;
}
