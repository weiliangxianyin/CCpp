#include <stdio.h>
void hanoi(int n, char from, char to, char temp, int *step) {
	if (n == 1) {
		(*step)++;
		printf("第%d步:将1号盘子从%c--->%c\n", *step, from, to);
	} else {
		hanoi(n - 1, from, temp, to, step);
		(*step)++;
		printf("第%d步:将%d号盘子从%c--->%c\n", *step, n, from, to);
		hanoi(n - 1, temp, to, from, step);
	}
}
int main() {
	int n, step = 0;
	scanf("%d", &n);
	hanoi(n, 'A', 'B', 'C', &step);
	return 0;
}

