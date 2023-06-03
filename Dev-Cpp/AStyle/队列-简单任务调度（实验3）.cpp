#include <stdio.h>
#include <stdlib.h>

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
#define MAXSIZE 20 /* 队列存储空间初始分配量 */

typedef int Status;
//构建任务数据类型
typedef struct {
	int id;//任务编号
	int starttime;//任务开始时间
	int runtime;//任务运行时间
} QElemType;

/*循环队列的顺序存储结构
  采用少用一个元素的方法实现，
  即队列空间为 MAXSIZE,则有MAXSIZE-1个元素时则认为队列满。
*/
typedef struct {
	QElemType data[MAXSIZE];
	int front;    /* 头指针 */
	int rear;     /* 尾指针，若队列不空，指向队列尾元素的下一个位置 */
} SqQueue;

Status initQueue(SqQueue &Q);
Status queueEmpty(SqQueue Q);
void enQueue(SqQueue &Q,QElemType e);
Status deQueue(SqQueue &Q,QElemType &e);
QElemType getHead(SqQueue Q);
void createJobs(SqQueue &A,SqQueue &B,int jobsNum);
void dealJobs(SqQueue &A,SqQueue &B);

int main(void) {
	int jobsNum;  //任务数目
	SqQueue A,B;
	initQueue(A);
	initQueue(B);
	scanf("%d", &jobsNum);
	createJobs(A,B,jobsNum);
	dealJobs(A,B);
	return 0;
}

/* 初始化一个空队列Q，头尾指针初始设置 */
Status initQueue(SqQueue &Q) {
	Q.front = 0;
	Q.rear = 0;
	return  OK;
}

/* 若队列Q为空队列,则返回TRUE,否则返回FALSE */
Status queueEmpty(SqQueue Q) {
	if(Q.front == Q.rear)
		return TRUE;
	return FALSE;
}

/*只提交以下代码*/
void enQueue(SqQueue &Q,QElemType e) {
	if((Q.rear+1)%MAXSIZE==Q.front)return ERROR;
	Q.data[Q.rear]=e;
	Q.rear=(Q.rear+1)%MAXSIZE;
}

Status deQueue(SqQueue &Q,QElemType &e) {
	if(Q.front==Q.rear)return ERROR;
	e=Q.data[Q.front];
	Q.front=(Q.front+1)%MAXSIZE;
	return OK;
}

QElemType getHead(SqQueue Q) {
	if(Q.front!=Q.rear)return Q.data[Q.front];
}

void createJobs(SqQueue &A,SqQueue &B,int jobsNum) {
	int fa=0,fb=0;//分别记录队列A和B的任务完成时间
	int t;
	QElemType job;
	for(int i = 1; i <= jobsNum; i++) {
		scanf("%d", &t);
		job.id=i;
		job.runtime=t;

		if(fa<=fb) {
			A.data[A.rear]=job;
			A.rear=(A.rear+1)%MAXSIZE;
			fa+=job.runtime;
		} else {
			B.data[B.rear]=job;
			B.rear=(B.rear+1)%MAXSIZE;
			fb+=job.runtime;
		}
	}
}

void dealJobs(SqQueue &A,SqQueue &B) {
	QElemType temp;	//若两个队列都不为空
	while(!queueEmpty(A) && !queueEmpty(B)) {
		if (A.data[A.front].runtime <= B.data[B.front].runtime) {
			temp = A.data[A.front];
			printf("%d ", temp.id);
			A.front = (A.front + 1) % MAXSIZE;
		} else {
			temp = B.data[B.front];
			printf("%d ", temp.id);
			B.front = (B.front + 1) % MAXSIZE;
		}
	}

	while(!queueEmpty(A)) {
		temp = A.data[A.front];
		printf("%d ",temp.id);
		A.front=(A.front+1)%MAXSIZE;
	}

	while(!queueEmpty(B)) {
		temp = B.data[B.front];
		printf("%d ",temp.id);
		B.front=(B.front+1)%MAXSIZE;
	}
}
