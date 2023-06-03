#include <stdio.h>
int main(void){
    int a,b,h,c,j,s;
    
    scanf("%d%d",&a,&b);
    h=a+b;
    c=a-b;
    j=a*b;
    s=a/b;
    printf("%d + %d = %d\n",a,b,h);
    printf("%d - %d = %d\n",a,b,c);
    printf("%d * %d = %d\n",a,b,j);
    printf("%d / %d = %d\n",a,b,s);
	
	return 0;
}
