#include <stdio.h>

int main()
{

int i=1;
double p=1;
int n;


scanf("%d",&n);

while(i<=n)
{


   p=p*(366-i)/365.0;
   
   i=i+1;
    
}
    printf("%.3f",1-p);
   	return 0;
}
