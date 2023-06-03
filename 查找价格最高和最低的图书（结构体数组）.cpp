#include <stdio.h>
struct book {
	char x[81];
	double y;
}a[10];
int main(void) {
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		getchar(); 
		gets(a[i].x);
		scanf("%lf",&a[i].y);
	}
	int low=0,high=0;
	for(i=0;i<n;i++){
		if(a[low].y>a[i].y){
			low=i;
		}
		if(a[high].y<a[i].y){
		high=i;
		}
	}
	printf("%.2lf, ",a[high].y);
	puts(a[high].x);
	printf("%.2lf, ",a[low].y);
	puts(a[low].x);
	return 0;
}
