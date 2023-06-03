#include <stdio.h>
int main(void) {
	char a[13][10]= {"January","February","March","April","May","June",
	                 "July","August","September","October","November","December"
	                };
	int n;
	scanf("%d",&n);
	printf("%s",*(a+n-1));
	return 0;
}
