#include <stdio.h>
#include <stdlib.h>
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
typedef int Status;/* Status是函数的类型,其值是函数结果状态代码，如OK等 */
typedef int ElemType;/* ElemType类型根据实际情况而定，这里假设为int */

typedef struct Node {
	ElemType data;
	struct Node *next;
} Node,*linkList;

Status visit(ElemType c) {
	printf("%d ",c);
	return OK;
}

/* 初始化线性表 */
Status InitList(linkList &L) {
	L=new Node;/* 产生头结点,并使L指向此头结点 */
	if(!L) /* 存储分配失败 */
		return ERROR;
	L->next=NULL;          /* 指针域为空 */

	return OK;
}

/* 初始条件：线性表L已存在。操作结果：若L为空表，则返回TRUE，否则返回FALSE */
Status ListEmpty(linkList L) {
	if(L->next)
		return FALSE;
	else
		return TRUE;
}

/* 初始条件：线性表L已存在。操作结果：将L重置为空表 */
Status ClearList(linkList &L) {
	linkList p,q;
	p=L->next;           /* p指向第一个结点 */
	while(p) {              /* 没到表尾 */
		q=p->next;
		free(p);
		p=q;
	}
	L->next=NULL;                   /* 头结点指针域为空 */
	return OK;
}

/* 初始条件：线性表L已存在。操作结果：返回L中数据元素个数 */
int ListLength(linkList L) {
	int i=0;
	linkList p=L->next;           /* p指向第一个结点 */
	while(p) {
		i++;
		p=p->next;
	}
	return i;
}

/* 初始条件：线性表L已存在，1≤i≤ListLength(L) */
/* 操作结果：用e返回L中第i个数据元素的值 */
Status GetElem(linkList L,int i,ElemType *e) {
	int j;
	linkList p;                 /* 声明一结点指针p */
	p->next=L;                     /* 让p指向链表L的第一个结点 */
	j = 1;                  /* j为计数器 */
	while (p && j<i) { /* p不为空或者计数器j还没有等于i时，循环继续 */
		p=p->next;
		j++;
	}
	if ( !p || j>i )
		return ERROR; /* 第i个元素不存在 */
	*e=p->data;                 /* 通过e取此元素的数据 */
	return OK;
}

/* 初始条件：线性表L已存在 */
/* 操作结果：返回L中第1个与e满足关系的数据元素的位序。 */
/* 若这样的数据元素不存在，则返回值为0 */
int LocateElem(linkList L,ElemType e) {
	int i=0;
	linkList p=L->next;
	while(p) {
		i++;
		if(p->data == e) return i;
		p=p->next;
	}

	return 0;
}


/* 初始条件：线性表L已存在,1≤i≤ListLength(L)， */
/* 操作结果：在L中第i个位置之前插入新的数据元素e，L的长度加1 */
Status ListInsert(linkList &L,int i,ElemType e) {
	int j;
	linkList p,s;
	p = L;
	j = 1;
	while (p&&j<i) {   /* 寻找第i个结点 */
		p = p->next;
		++j;
	}
	if (!p || j > i)
		return ERROR;   /* 第i个元素不存在 */
	s = (linkList)malloc(sizeof(Node)); /* 生成新结点(C语言标准函数) */
	s->data = e;
	s->next=p->next;                /* 将p的后继结点赋值给s的后继 */
	p->next=s;                     /* 将s赋值给p的后继 */
	return OK;
}

/* 初始条件：线性表L已存在，1≤i≤ListLength(L) */
/* 操作结果：删除L的第i个数据元素，并用e返回其值，L的长度减1 */
Status ListDelete(linkList &L,int i,ElemType *e) {
	int j;
	linkList p,q;
	p = L;
	j = 1;
	while (p->next && j < i) { /* 遍历寻找第i个元素 */
		p = p->next;
		++j;
	}
	if (!(p->next) || j > i)
		return ERROR;           /* 第i个元素不存在 */
	q=p->next;
	p->next=q->next;
	/* 将q的后继赋值给p的后继 */
	*e=q->data; 			                        /* 将q结点中的数据给e */
	free(q);                               /* 让系统回收此结点，释放内存 */
	return OK;
}

/* 初始条件：线性表L已存在 */
/* 操作结果：依次对L的每个数据元素输出 */
Status ListTraverse(linkList L) {
	linkList p=L->next;
	while(p) {
		visit(p->data);
		p=p->next;
	}
	printf("\n");
	return OK;
}

int main() {
	linkList L;
	ElemType e,t;
	Status i;
	int j,k,n;
	i=InitList(L);
	printf("初始化L后：ListLength(L)=%d\n",ListLength(L));
	scanf("%d",&n);
	for(j=1; j<=n; j++) {
		scanf("%d",&t);
		if(ListInsert(L,1,t)!=OK) exit(0);
	}
	printf("在L的表头依次插入元素后：L.data=");
	ListTraverse(L);
	printf("ListLength(L)=%d\n",ListLength(L));
	i=ListEmpty(L);
	printf("L是否空：i=%d(1:是 0:否)\n",i);
	i=ClearList(L);
	printf("清空L后：ListLength(L)=%d\n",ListLength(L));
	i=ListEmpty(L);
	printf("L是否空：i=%d(1:是 0:否)\n",i);
	scanf("%d",&n);
	for(j=1; j<=n; j++) {
		scanf("%d",&t);
		if(ListInsert(L,j,t)!=OK) exit(0);
	}
	printf("在L的表尾依次插入元素后：L.data=");
	ListTraverse(L);
	printf("ListLength(L)=%d\n",ListLength(L));
	ListInsert(L,1,0);
	printf("在L的表头插入0后：L.data=");
	ListTraverse(L);
	printf("ListLength(L)=%d\n",ListLength(L));
	GetElem(L,5,&e);
	printf("第5个元素的值为%d\n",e);
	for(j=1; j<=2; j++) {
		scanf("%d",&t);
		k=LocateElem(L,t);
		if(k)
			printf("第%d个元素的值为%d\n",k,t);
		else
			printf("没有值为%d的元素\n",t);
	}


	k=ListLength(L); /* k为表长 */
	for(j=k+1; j>=k; j--) {
		i=ListDelete(L,j,&e); /* 删除第j个数据 */
		if(i==ERROR)
			printf("删除第%d个数据失败\n",j);
		else
			printf("删除第%d个的元素值为：%d\n",j,e);
	}
	printf("依次输出L的元素：");
	ListTraverse(L);

	j=5;
	ListDelete(L,j,&e); /* 删除第5个数据 */
	printf("删除第%d个的元素值为：%d\n",j,e);

	printf("依次输出L的元素：");
	ListTraverse(L);

	i=ClearList(L);
	printf("清空L后：ListLength(L)=%d\n",ListLength(L));

	return 0;
}
