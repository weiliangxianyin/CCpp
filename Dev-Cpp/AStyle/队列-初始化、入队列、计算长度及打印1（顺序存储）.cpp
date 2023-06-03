#include <stdio.h>
#include <stdlib.h>

#define OK 1
#define ERROR 0
#define OVERFLOW -2
#define MAXSIZE 100 /* �洢�ռ��ʼ������ */
typedef int Status;
typedef int QElemType; /* QElemType���͸���ʵ������������������Ϊint */
/* ѭ�����е�˳��洢�ṹ */
typedef struct {
	QElemType *base;
	int front;    /* ͷָ�� */
	int rear; /* βָ�룬�����в��գ�ָ�����βԪ�ص���һ��λ�� */
} SqQueue;

/* ��ʼ��һ���ն���Q */
Status InitQueue(SqQueue &Q) {
	Q.base=new QElemType[MAXSIZE];
	if(!Q.base) exit(OVERFLOW);
	Q.front=Q.rear=0;
	return OK;
}

/* ����Q��Ԫ�ظ�����Ҳ���Ƕ��еĵ�ǰ���� */
int QueueLength(SqQueue Q) {
	return (Q.rear-Q.front+MAXSIZE)%MAXSIZE;
}

/* ������δ���������Ԫ��eΪQ�µĶ�βԪ�� */
Status EnQueue(SqQueue &Q,QElemType e) {
	if((Q.rear+1)%MAXSIZE==Q.front)
		return ERROR;
	Q.base[Q.rear]=e;
	Q.rear=(Q.rear+1)%MAXSIZE;
	return OK;
}

/* �Ӷ�ͷ����β���ζԶ���Q��ÿ��Ԫ����� */
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

