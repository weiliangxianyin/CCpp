#include <stdio.h>
#include <stdlib.h>

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
#define MAXSIZE 20 /* ���д洢�ռ��ʼ������ */

typedef int Status;
//����������������
typedef struct {
	int id;//������
	int starttime;//����ʼʱ��
	int runtime;//��������ʱ��
} QElemType;

/*ѭ�����е�˳��洢�ṹ
  ��������һ��Ԫ�صķ���ʵ�֣�
  �����пռ�Ϊ MAXSIZE,����MAXSIZE-1��Ԫ��ʱ����Ϊ��������
*/
typedef struct {
	QElemType data[MAXSIZE];
	int front;    /* ͷָ�� */
	int rear;     /* βָ�룬�����в��գ�ָ�����βԪ�ص���һ��λ�� */
} SqQueue;

Status initQueue(SqQueue &Q);
Status queueEmpty(SqQueue Q);
void enQueue(SqQueue &Q,QElemType e);
Status deQueue(SqQueue &Q,QElemType &e);
QElemType getHead(SqQueue Q);
void createJobs(SqQueue &A,SqQueue &B,int jobsNum);
void dealJobs(SqQueue &A,SqQueue &B);

int main(void) {
	int jobsNum;  //������Ŀ
	SqQueue A,B;
	initQueue(A);
	initQueue(B);
	scanf("%d", &jobsNum);
	createJobs(A,B,jobsNum);
	dealJobs(A,B);
	return 0;
}

/* ��ʼ��һ���ն���Q��ͷβָ���ʼ���� */
Status initQueue(SqQueue &Q) {
	Q.front = 0;
	Q.rear = 0;
	return  OK;
}

/* ������QΪ�ն���,�򷵻�TRUE,���򷵻�FALSE */
Status queueEmpty(SqQueue Q) {
	if(Q.front == Q.rear)
		return TRUE;
	return FALSE;
}

/*ֻ�ύ���´���*/
void enQueue(SqQueue &Q,QElemType e) {
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
	int fa=0,fb=0;//�ֱ��¼����A��B���������ʱ��
	int t;
	QElemType job;
	for(int i = 1; i <= jobsNum; i++) {
		scanf("%d", &t);
		job.id=i;
		job.runtime=t;

		if(fa<=fb) {
			job.starttime=fa;
			enQueue(A,job);
			fa+=job.runtime;
			
		} else {
			job.starttime=fb;
			enQueue(B,job);
			fb+=job.runtime;
			
		}
	}
}

void dealJobs(SqQueue &A,SqQueue &B) {
	QElemType temp;	//���������ж���Ϊ��
	while(!queueEmpty(A) && !queueEmpty(B)) {
		int a=getHead(A).runtime+getHead(A).starttime;	
		int b=getHead(B).runtime+getHead(B).starttime;
		if (a<=b) {
			deQueue(A,temp);
			printf("%d ", temp.id);
		} else {
			deQueue(B,temp);
			printf("%d ", temp.id);
		}
	}

	while(!queueEmpty(A)) {
		deQueue(A, temp);
        printf("%d ", temp.id);
	}

	while(!queueEmpty(B)) {
		deQueue(B, temp);
        printf("%d ", temp.id);
	}
}
