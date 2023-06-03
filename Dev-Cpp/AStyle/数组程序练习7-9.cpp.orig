#include <stdio.h>
int main(void){
	int a[5][4]={{80,70,89,60},{90,80,63,65},
   {78,86,90,81},{90,80,63,65},{72,83,95,86}};
	int i,j,s;
	double ave;
	for(i=0;i<5;i++){
		for(j=0;j<4;j++){
			s=s+a[i][j];
		}
		printf("student%d的总分是%d\n",i+1,s);
		ave=1.0*s/4;
		printf("student%d的平均分是%.2lf\n",i+1,ave);
		s=0;
	}	
	for(i=0;i<4;i++){
		for(j=0;j<5;j++){
			s=s+a[j][i];
		}
		printf("课程%d的总分是%d\n",i+1,s);
		ave=1.0*s/5;
		printf("课程%d的平均分是%.2lf\n",i+1,ave);
		s=0;
	}
	return 0;
}
