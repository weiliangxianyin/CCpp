#include<stdio.h>
#include<string.h>
void fun(char a[]) {
	int i,n=strlen(a);
	for(i=0; i<n/2; i++) {
		int t=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=t;
	}
}
int main(void) {
	char a[80];
	gets(a);
	fun(a);
	puts(a);
	return 0;
}
