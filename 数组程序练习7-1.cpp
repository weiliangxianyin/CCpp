#include <stdio.h>
int main(void){
	double a[10],s=0,v;
	int i;
	for(i=0;i<10;i++){
		scanf("%lf",&a[i]);
		s+=a[i];
	}
	v=s/10;
	printf("ƽ��ֵΪ:%.1lf\n",v);
	printf("С��ƽ��ֵ����:"); 
	for(i=0;i<10;i++){
		if(a[i]<v)
		printf("%.1lf ",a[i]);
	}
	return 0;
}
