#include <stdio.h>
int even(int n);
int main(void) {
	int N, i,temp,s;
	s=0;
	scanf("%d", &N);
	printf("Sum of( ");
	for ( i=0; i<N; i++ ) {
		scanf("%d", &temp);
		if ( even(temp)==0 ) {
			printf("%d ", temp);
			s=s+temp;
		}

	}
	printf(")=%d\n", s);
	return 0;
}
	int even( int n){
	if(n%2==0) return 1;
	else return 0;
	}
