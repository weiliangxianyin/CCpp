#include <stdio.h>
#include <string.h>
struct student {
	int num;
	char name[10];
	int age;
	char sex;
	char major[30];
	float math,english,computer;
};
int main() {
	int N=10;
	struct student students[N];
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %s %d %c %s %f %f %f", &students[i].num, students[i].name, &students[i].age, &students[i].sex, students[i].major, &students[i].math, &students[i].english, &students[i].computer);
	}
	int max_index = 0, min_index = 0;
	for (int i = 1; i < n; i++) {
		if (students[i].math + students[i].english + students[i].computer > students[max_index].math + students[max_index].english + students[max_index].computer)
			max_index = i;
		if (students[i].math + students[i].english + students[i].computer < students[min_index].math + students[min_index].english + students[min_index].computer)
			min_index = i;
	}
	printf("%d %s %d %c %s %.2f %.2f %.2f\n", students[max_index].num, students[max_index].name, students[max_index].age, students[max_index].sex, students[max_index].major, students[max_index].math, students[max_index].english, students[max_index].computer);
	printf("%d %s %d %c %s %.2f %.2f %.2f\n", students[min_index].num, students[min_index].name, students[min_index].age, students[min_index].sex, students[min_index].major, students[min_index].math, students[min_index].english, students[min_index].computer);
	return 0;
}

