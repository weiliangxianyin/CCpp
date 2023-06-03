#include <stdio.h>
#define MAXN 10

void sort( int a[], int n );

int main() {
	int i, n;
	int a[MAXN];
	scanf("%d", &n);
	for( i=0; i<n; i++ )
		scanf("%d", &a[i]);
	sort(a, n);
	printf("After sorted the array is:");
	for( i = 0; i < n; i++ )
		printf(" %d", a[i]);
	printf("\n");
	return 0;
}
void sort( int a[], int n ){
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1-i;j++){
			if(*(a+j)>*(a+j+1)){
				int t=*(a+j);
				*(a+j)=*(a+j+1);
				*(a+j+1)=t; 
			}
		}		
	}
}
