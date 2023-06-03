#include <stdio.h>
int main(void){
	int n,i,g,count=0;
	double sum,average=0;
	
	scanf("%d\n",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&g);
		sum=sum+g;
		
		if(g>=60){
			count++;
		}
	}
	average=sum/n;
	printf("average=%.1lf\n",average);
	printf("count=%d\n",count);
	
	return 0;
}
