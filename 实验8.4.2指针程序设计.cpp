#include <stdio.h>
int main(void) {
	int n,i;
	scanf("%d",&n);
	char a[13][4]= {"Jan","Feb","Mar","Apr","May","Jun",
	                "Jul","Aug","Sep","Oct","Nov","Dec"
	               };
	if(n<1||n>12)printf("输入的月份不正确");
	else {
		printf("%s\n",a[n-1]);
		printf("Apr\n""Aug\n""Dec\n""Feb\n""Jan\n""Jul\n""Jun\n""Mar\n""May\n""Nov\n""Oct\n""Sep");
	}
	
	return 0;
}
