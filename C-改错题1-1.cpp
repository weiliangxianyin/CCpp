#include "stdio.h"
int main()
{
    int a,b,y;
    scanf("%d%d",&a,&b);        
    y=a*b;                    
   printf("%d=%d*%d\n",y,a,b);     /*ERROR*/
   printf("%d*%d=%d\n",a,b,y);    /*ERROR*/        
   return 0;
}
