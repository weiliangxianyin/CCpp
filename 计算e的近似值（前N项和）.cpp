#include <stdio.h>
int main(void){
	int n,i;
	double j=1,sum=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		j*=i;
		sum+=1/j;
    }
	printf("%.8lf",sum);
	return 0;
}
