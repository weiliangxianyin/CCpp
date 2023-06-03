#include <stdio.h>
void hanoi(int n, char from, char to, char temp, int *step) {
	if (n == 1) {
		(*step)++;
		printf("��%d��:��1�����Ӵ�%c--->%c\n", *step, from, to);
	} else {
		hanoi(n - 1, from, temp, to, step);
		(*step)++;
		printf("��%d��:��%d�����Ӵ�%c--->%c\n", *step, n, from, to);
		hanoi(n - 1, temp, to, from, step);
	}
}
int main() {
	int n, step = 0;
	scanf("%d", &n);
	hanoi(n, 'A', 'B', 'C', &step);
	return 0;
}

