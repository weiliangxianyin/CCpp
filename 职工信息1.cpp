#include <stdio.h>
#include <string.h>
struct Employee {
	int id;
	char name[20];
	float salary;
	float bonus;
	float insurance;
	float real_salary;
};
int main() {
	int n;
	scanf("%d", &n);
	struct Employee employees[n];
	for (int i = 0; i < n; i++) {
		scanf("%d%s%f%f%f", &employees[i].id, employees[i].name, &employees[i].salary, &employees[i].bonus, &employees[i].insurance);
	}

	for (int i = 0; i < n; i++) {
		employees[i].real_salary = employees[i].salary + employees[i].bonus - employees[i].insurance;
	}

	for (int i = 0; i < n; i++) {
		printf("%d %s %.2f %.2f %.2f %.2f\n", employees[i].id, employees[i].name, employees[i].salary, employees[i].bonus, employees[i].insurance, employees[i].real_salary);
	}
	return 0;
}

