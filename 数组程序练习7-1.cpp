#include <stdio.h>
int main(void){
	double a[10],s=0,v;
	int i;
	for(i=0;i<10;i++){
		scanf("%lf",&a[i]);
		s+=a[i];
	}
	v=s/10;
	printf("平均值为:%.1lf\n",v);
	printf("小于平均值的数:"); 
	for(i=0;i<10;i++){
		if(a[i]<v)
		printf("%.1lf ",a[i]);
	}
	return 0;
}
