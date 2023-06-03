#include <stdio.h>
int main(void){
	int n;
	scanf("%d",&n);
	int a[6]={6,9,10,12,15,n};
	int i,j;
	for(i=0;i<5;i++){
		for(j=i+1;j<6;j++){
			if(a[i]>a[j]){
				int t=a[j];
				a[j]=a[i];
				a[i]=t;
			}
		}
	}
	printf("插入后的数组元素：\n");
	for(i=0;i<6;i++){
		printf("%d ",a[i]);
	}
	return 0;
} 
