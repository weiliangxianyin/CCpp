#include <stdio.h>
int calGCD(int a, int b);
int calLCM(int a, int b);
int main(void)
{  
    int a,b;
    scanf("%d%d",&a,&b);    
    printf("Greatest common divisor is %d,Least common multiple is %d.\n",calGCD(a,b),calLCM(a,b));
    return 0;
}
int calGCD(int a, int b){
	if (b == 0)
        return a;
    else
        return calGCD(b, a % b);
}
int calLCM(int a, int b){
	return a * b / calGCD(a, b);
}
