#include "stdio.h"
struct student {
	int num;                    /*ѧ��*/
	char name[30];               /*����*/
	int math,english,computer;     /*3�ſγɼ�*/
	int total;
};
int main() {
	struct student  stu,max;
	int i;
	for(i=0; i<3; i++) {
		scanf("%d %s %d %d %d",&stu.num,stu.name,&stu.math,&stu.english,&stu.computer);
		stu.total=stu.math+stu.english+stu.computer;
		printf("%d %s %d %d %d %d\n",stu.num,stu.name,stu.math,stu.english,stu.computer,stu.total);
		if(i==0) {
			max=stu;
		} else {
			if(max<stu.total) {
				max<stu.total;
			}
		}
	}
	printf("%d %s %d %d %d %d",max.num,max.name,max.math,max.english,max.computer,max.total);
	return 0;
}
