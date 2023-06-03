#include <stdio.h>
#include <math.h>
int narcissistic( int number );
void PrintN( int m, int n );
int main() {
	int m, n;
	scanf("%d %d", &m, &n);
	if ( narcissistic(m) ) printf("%d is a narcissistic number\n", m);
	PrintN(m, n);
	if ( narcissistic(n) ) printf("%d is a narcissistic number\n", n);
	return 0;
}
int narcissistic( int number ) {
	int x=number,y=x,i,a,b,s=0;
	for(i=0; x>0; i++) {
		x/=10;
	}
	for(a=1; a<=i; a++) {
		b=y%10;
		s+=pow(b,i);
		y/=10;
	}
	if(s==number) return 1;
	else return 0;
}
void PrintN( int m, int n ) {
	for(m++; m<=n; m++) {
		if (narcissistic(m)==1)
			printf("%d\n",m);
	}
}
