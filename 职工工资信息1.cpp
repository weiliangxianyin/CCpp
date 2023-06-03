#include <stdio.h>
struct people {
	float num;
	char name[20];
	float price;
	float baoxian;
	float gongzi;
};
int main(void) {
	struct people a[10];
	int n,i;
	double s[10];
	scanf("%d",&n);
	getchar();
	for(i=0; i<n; i++) {
		scanf("%f %s %f %f %f",&a[i].num,&a[i].name,&a[i].gongzi,&a[i].price,&a[i].baoxian);
		s[i]=a[i].gongzi+a[i].price-a[i].baoxian;
	}
	for(i=0; i<n; i++) {
		printf("%.0f %s %.2f %.2f %.2f %.2f\n",a[i].num,a[i].name,a[i].gongzi,a[i].price,a[i].baoxian,s[i]);
	}

	return 0;
}
