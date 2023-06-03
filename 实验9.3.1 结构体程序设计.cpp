#include <stdio.h>
struct shu {
	int shi;       
	int xu;              
};
int main(void) {
	struct shu a,b;
	scanf("%d %d %d %d",&a.shi ,&a.xu ,&b.shi ,&b.xu );
	int s1,s2;
	s1=a.shi*b.shi-a.xu*b.xu;
	s2=a.shi*b.xu+a.xu*b.shi;
	printf("result is %d+%di",s1,s2);	
	
	return 0;
}
