#include <stdio.h>

int main(void)

{

    int x,y;

    scanf("%d",&x);                     /*$ERROR$*/

    y=x*x;

    printf("%d=%d*%d\n",y,x,x);          /*$ERROR$*/

    printf("%d*%d=%d\n",x,x,y);            /*$ERROR$*/

    return 0;

}
