#include <stdio.h>
#include <stdlib.h>

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

typedef int Status;
typedef int SElemType; /* SElemType类型根据实际情况而定，这里假设为int */


/* 链栈结构 */
typedef struct StackNode {
	SElemType data;
	struct StackNode *next;
} StackNode,*linkStack;


Status visit(SElemType c) {
	printf("%d ",c);
	return OK;
}

/*  构造一个空栈S */
void InitStack(linkStack &S) {
	S=NULL;
}

/* 把S置为空栈 */
Status ClearStack(linkStack &S) {
	linkStack p,q;
	p=S;
	S=NULL;
	q=NULL;
	while(p) {
		q=p->next;
		free(p);
		p=q;
	}
	return OK;
}

/* 若栈S为空栈，则返回TRUE，否则返回FALSE */
Status StackEmpty(linkStack S) {
	if (S==NULL)
		return TRUE;
	return FALSE;
}

/* 返回S的元素个数，即栈的长度 */
int StackLength(linkStack S) {
	int len = 0;
	linkStack p = S;
	while (p) {
		len++;
		p = p->next;
	}
	return len;
}

/* 若栈不空，则用e返回S的栈顶元素，并返回OK；否则返回ERROR */
Status GetTop(linkStack S,SElemType &e) {
	if(StackEmpty(S))
		return ERROR;
	e = S->data;
	return OK;
}

/* 插入元素e为新的栈顶元素 */
Status Push(linkStack &S,SElemType e) {
	linkStack p=(linkStack)malloc(sizeof(StackNode));
	p->data=e;
	p->next = S;   /* 把当前的栈顶元素赋值给新结点的直接后继 */
	S = p;        /* 将新的结点s赋值给栈顶指针 */
	return OK;
}

/* 若栈不空，则删除S的栈顶元素，用e返回其值，并返回OK；否则返回ERROR */
Status Pop(linkStack &S,SElemType &e) {
	linkStack p;
	if(StackEmpty(S))
		return ERROR;
	e=S->data;
	p = S;                   /* 将栈顶结点赋值给p*/
	S = S->next;         /* 使得栈顶指针下移一位，指向后一结点 */
	free(p);                  /* 释放结点p */
	return OK;
}

Status StackTraverse(linkStack S) {
	linkStack p;
	p=S;
	while(p) {
		visit(p->data);
		p = p->next;
	}
	printf("\n");
	return OK;
}

int main(void) {
	int i,n;
	linkStack s;
	SElemType e;
	InitStack(s);
	scanf("%d",&n);
	for(i=1; i<=n; i++) {
		scanf("%d",&e);
		Push(s,e);
	}
	printf("栈中从顶至底元素依次为：");
	StackTraverse(s);
	Pop(s,e);
	printf("弹出的栈顶元素 e=%d\n",e);
	printf("栈空否：%d(1:空 0:否)\n",StackEmpty(s));
	GetTop(s,e);
	printf("栈顶元素 e=%d 栈的长度为%d\n",e,StackLength(s));
	ClearStack(s);
	printf("清空栈后，栈空否：%d(1:空 0:否)\n",StackEmpty(s));
	return 0;
}
