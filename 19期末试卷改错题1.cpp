#include "stdio.h"
int main()
{
        int a,b,t;
        scanf("%d%d",&a,&b);         /*ERROR*/
        t=a;                      /*ERROR*/   
        a=b;
        b=t;
        printf("%d %d\n",a,b);
        return 0;
}
