#include<stdio.h>
#include<math.h>
int isPPDI(int x);
int main()
{
    int x, result;
    scanf("%d", &x);
    result = isPPDI(x);
    if (result == 1) {
        printf("%d是水仙花数！", x);
    } else {
        printf("%d不是水仙花数！", x);
    }
}
int isPPDI(int x){
	if(x/100==0||x/100>9) return 0;
	int a,b,c;
	a=x/100;
	b=x/10%10;
	c=x%10;
	if(x==a*a*a+b*b*b+c*c*c) return 1;
	else return 0;
}
