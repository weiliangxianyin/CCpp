#include <stdio.h>
#include <stdlib.h>

#define OK 1
#define ERROR 0
#define OVERFLOW -2
#define MAXSIZE 100 /* 存储空间初始分配量 */
typedef int Status;
typedef int QElemType; /* QElemType类型根据实际情况而定，这里假设为int */
/* 循环队列的顺序存储结构 */
typedef struct {
	QElemType *base;
	int front;    /* 头指针 */
	int rear; /* 尾指针，若队列不空，指向队列尾元素的下一个位置 */
} SqQueue;

/* 初始化一个空队列Q */
Status InitQueue(SqQueue &Q) {
	Q.base=new QElemType[MAXSIZE];
	if(!Q.base) exit(OVERFLOW);
	Q.front=Q.rear=0;
	return OK;
}

/* 返回Q的元素个数，也就是队列的当前长度 */
int QueueLength(SqQueue Q) {
	return (Q.rear-Q.front+MAXSIZE)%MAXSIZE;
}

/* 若队列未满，则插入元素e为Q新的队尾元素 */
Status EnQueue(SqQueue &Q,QElemType e) {
	if((Q.rear+1)%MAXSIZE==Q.front)
		return ERROR;
	Q.base[Q.rear]=e;
	Q.rear=(Q.rear+1)%MAXSIZE;
	return OK;
}

/* 从队头到队尾依次对队列Q中每个元素输出 */
void QueueTraverse(SqQueue Q) {
	if(Q.front==Q.rear)return ERROR;
	while(Q.front!=Q.rear) {
		printf("%d ",Q.base[Q.front]);
		Q.front=(Q.front+1)%MAXSIZE;
	}
}

int main(void) {
	QElemType d;
	SqQueue Q;
	InitQueue(Q);
	scanf("%d",&d);
	while(d!=-1) {
		EnQueue(Q,d);
		scanf("%d",&d);
	}
	printf("%d\n",QueueLength(Q));
	QueueTraverse(Q);
	return 0;
}

