#include "stdio.h"
int main()
{
        int a,b,c,max,*p1,*p2,*p3;
        p1=&a; p2=&b; p3=&c;               /*ERROR*/
        scanf("%d%d%d",p1,p2,p3);
        max=*p1;
        if(*p2>max)  max=*p2;            /*ERROR*/
        if(*p3>max)  max=*p3;            /*ERROR*/
        printf("max=%d\n",max);
        return 0;
}
