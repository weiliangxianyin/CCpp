#include <stdio.h>
#define MAXN 20
void CountOff( int n, int m, int out[] );
int main(void) {
	int out[MAXN], n, m;
	int i;
	scanf("%d %d", &n, &m);
	CountOff( n, m, out );
	for ( i = 0; i < n; i++ )
		printf("%d ", out[i]);
	return 0;
}
void CountOff( int n, int m, int out[] ) {
	int i,j,k=0,x=0;
	int a[n];
	for(i=0; i<n; i++)
		out[i]=i+1;

	for(i=0; i<n; i++) {
		j=1;
		while(j<m) {
			while(out[k]==0)
				k=(k+1)%n;
			j++;
			k=(k+1)%n;
		}
		while(out[k]==0) {
			k=(k+1)%n;
		}
		a[x]=out[k];
		x++;
		out[k]=0;
	}
	for(i=0; i<n; i++) {
		out[i]=a[i];
	}
}

