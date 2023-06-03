#include <stdio.h>

int main(void)

{

    int a,b,max;

    scanf("%d %d",&a,&b);                   /*$ERROR$*/

    max=a>b?a:b;

    printf("the max is %d",max);        /*$ERROR$*/

    return 0;

}
