#include <stdio.h>
#define N 3
struct employee {
	long num;
	char  name[15];
	long bwage,bonus,ins,rwage;
};
int main(void) {
	struct employee worker[N];                                               /*$ERROR$*/
	int i;
	long total=0;
	total=0;
	for(i=0; i<N; i++) {
		scanf("%ld,%s", &worker[i].num, &worker[i].name);                          /*$ERROR$*/
		scanf("%ld,%ld,%ld", &worker[i].bwage, &worker[i].bonus, &worker[i].ins);
	}
	for(i=0; i<N; i++) {
		worker[i].rwage=worker[i].bwage+worker[i].bonus-worker[i].ins;
		total= total+worker[i].rwage;                                              /*$ERROR$*/
	}
	for(i=0; i<N; i++) {
		printf("%-9ld  %-14s %-ld\n", worker[i].num, worker[i].name, worker[i].rwage);
	}
	printf("\n部门实发工资总额 =%ld\n",total);
	return 0;

}
