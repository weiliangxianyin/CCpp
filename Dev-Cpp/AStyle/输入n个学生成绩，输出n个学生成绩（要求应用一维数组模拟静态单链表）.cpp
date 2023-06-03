#include "stdio.h"
struct student {
	int data;
	int next;
};
int main() {
	int n;
	scanf("%d",&n);
	struct student a[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i].data);
		a[i].next = i + 1;
	}
	a[n - 1].next = -1;
	for (int i = 0; i < n; i++) {
		printf("%d ", a[i].data);
	}
	printf("\n");
	return 0;
}

