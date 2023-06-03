#include <stdio.h>
struct book {
	char name[30];
	float price;
};
struct book books[10];
int main(void) {
	int i,max,min;
	max=min=0; 
	int n;
	scanf("%d",&n);
	getchar();
	for(i=0; i<n; i++)
		scanf("%s%f",&books[i].name,&books[i].price);
	for(i=1; i<n; i++) {
		if(books[max].price<books[i].price)
			max=i;

		if(books[min].price>books[i].price)
			min=i;
	}
	printf("定价最高的书名称是%s,价格是%.2f\n",books[max].name, books[max].price);
	printf("定价最低的书名称是%s,价格是%.2f\n",books[min].name, books[min].price);
	return 0;

}
