#include <stdio.h>
struct book {
	char name[30];
	int isbn;
	float price;
};
struct book books[3];
int main(void) {
	int i,max,min;
	max=min=0;
	for(i=0; i<3; i++)
		scanf("%s%d%f",                       );
	for(i=1; i<3; i++) {
		if(books[max].price<books[i].price)
			;

		if(                                     )
			min=i;
	}
	printf("�۸���ߵ����ǣ�%s����۸�Ϊ��%.2f\n",books[max].name, books[max].price);
	printf("�۸���͵����ǣ�%s����۸�Ϊ��%.2f\n",books[min].name, books[min].price);
	return 0;

}
