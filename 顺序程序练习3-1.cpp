#include <stdio.h>
int main(void){
	int a,b,c,d;
    scanf("%d%d%d",&a,&b,&c);
    d=a;
    a=c;
    c=b;
    b=d;
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    printf("c=%d\n",c);

return 0;
}
