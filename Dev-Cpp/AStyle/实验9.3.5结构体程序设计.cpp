#include<stdio.h>
struct freshman {
	long int num;
	char name[20];
	char sex;
	int score;
};
int main(void) {
	struct freshman stud[81],temp;
	int i,j,index,n=0;
	for(i=0;; i++) {
		scanf("%ld %s %c %d",&stud[i].num,stud[i].name,&stud[i].sex,&stud[i].score);
		n++;
		if(stud[i].num==0) {
			break;
		}
	}
	n=n-1;
	for(i=0; i<n-1; i++) {
		index=i;
		for(j=i+1; j<n; j++) {
			if(stud[j].score<stud[index].score) {
				index=j;
			}
		}
		if(index!=i) {
			temp=stud[i];
			stud[i]=stud[index];
			stud[index]=temp;
		}
	}
	for(i=0; i<n; i++) {
		printf("%ld %s %c %d\n",stud[i].num,stud[i].name,stud[i].sex,stud[i].score);
	}
	return 0;
}
