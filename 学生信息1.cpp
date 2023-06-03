#include <stdio.h>
struct student {
	int num;
	char name[10];
	int age;
	char sex;
	char major[30];
	float computer,english,math;
	float total;
};
int main() {
	int n;
	scanf("%d", &n);
	struct student students[n];
	for (int i = 0; i < n; i++) {
		scanf("%d %s %d %c %s %f %f %f", &students[i].num, students[i].name, &students[i].age, &students[i].sex, students[i].major, &students[i].computer, &students[i].english, &students[i].math);
		students[i].total = students[i].computer + students[i].english + students[i].math;
	}
	int maxIndex = 0;
	for (int i = 1; i < n; i++) {
		if (students[i].total > students[maxIndex].total) {
			maxIndex = i;
		}
	}
	printf("%d %s %d %c %s %.2f %.2f %.2f %.2f", students[maxIndex].num, students[maxIndex].name, students[maxIndex].age, students[maxIndex].sex, students[maxIndex].major, students[maxIndex].computer, students[maxIndex].english, students[maxIndex].math, students[maxIndex].total);
	return 0;
}

