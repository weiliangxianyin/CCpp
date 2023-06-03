#include <stdio.h>

int main(void)

{

    int x,y;

    scanf("%d",&x);                      /*$ERROR$*/           

    if(x<0){                           /*$ERROR$*/

    x=-x;}
	
	else if(x>=0) {

    x= x; }

    printf("x=%d",x);     

    return 0;  

}
