#include <stdio.h>
int main(void) {
	int g,n,i=1;
	int a=0,b,c,d,e=0;
	scanf("%d",&n);
	for(; i<=n; i++) {
		scanf("%d",&g);
		if(g>=90)a++;
		else if(g>=80)b++;
		else if(g>=70)c++;
		else if(g>=60)d++;
		else e++;
	}
	printf("%d %d %d %d %d",a,b,c,d,e);
	return 0;
}
