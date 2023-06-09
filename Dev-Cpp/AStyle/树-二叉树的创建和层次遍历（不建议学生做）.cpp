#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define OK 1
#define ERROR 0
#define OVERFLOW -2
#define MAXSIZE 100

typedef struct BiTNode {
	char data;
	struct BiTNode *lchild,*rchild;
} BiTNode,*BiTree;

typedef BiTree QElemType;

typedef struct {
	QElemType *base;
	int front;
	int rear; /*若队列不空，指向队列尾元素的下一个位置 */
} SqQueue;

void InitQueue(SqQueue &Q);
int EnQueue(SqQueue &Q, QElemType e);
int DeQueue(SqQueue &Q, QElemType &e);
int EmptyQueue(SqQueue Q);
void InitBiTree(BiTree &T);
void CreateBiTree(BiTree &T);
int LevelOrderTraverse(BiTree T);

int main(void) {
	BiTree T;
	InitBiTree(T);
	CreateBiTree(T);
	LevelOrderTraverse (T);
	return 0;
}

void InitQueue(SqQueue &Q) {
	Q.base=new BiTree[MAXSIZE];
	if(!Q.base) exit(OVERFLOW);
	Q.front=Q.rear=0;
}


int EnQueue(SqQueue &Q, QElemType e) {
	if((Q.rear+1)%MAXSIZE==Q.front)
		return ERROR;
	Q.base[Q.rear]=e;
	Q.rear=(Q.rear+1)%MAXSIZE;
	return OK;
}

int DeQueue(SqQueue &Q, QElemType &e) {
	if(Q.front==Q.rear)
		return ERROR;
	e=Q.base[Q.front];
	Q.front=(Q.front+1)%MAXSIZE;
	return OK;
}

int EmptyQueue(SqQueue Q) {
	if(Q.front==Q.rear)  return 1;
	else              return 0;
}

/*仅提交以下代码*/
void InitBiTree(BiTree &T) {
	T=NULL;
}


/* 按先序输入二叉树中结点的值（一个字符）,#表示空树，构造二叉链表表示二叉树T。 */
void CreateBiTree(BiTree &T) {
	char ch;
	scanf("%c",&ch);
	if(ch=='#')T=NULL;
	else {
		T=new BiTNode;
		T->data=ch;
		CreateBiTree(T->lchild);
		CreateBiTree(T->rchild);
	}
}

int LevelOrderTraverse(BiTree T) {
	SqQueue Q;
	InitQueue(Q);
	QElemType p;
	if(T)EnQueue(Q,T);
	while(!EmptyQueue(Q)) {
		DeQueue(Q,p);
		printf("%c",p->data);
		if(p->lchild)EnQuene(Q,p->lchild);
		if(p->rchild)EnQuene(Q,p->rchild);
	}
	return OK;
}
