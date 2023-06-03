#include <stdio.h>
#include <stdlib.h>
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
typedef int Status;/* Status�Ǻ���������,��ֵ�Ǻ������״̬���룬��OK�� */
typedef int ElemType;/* ElemType���͸���ʵ������������������Ϊint */

typedef struct Node {
	ElemType data;
	struct Node *next;
} Node,*linkList;

Status visit(ElemType c) {
	printf("%d ",c);
	return OK;
}

/* ��ʼ�����Ա� */
Status InitList(linkList &L) {
	L=new Node;/* ����ͷ���,��ʹLָ���ͷ��� */
	if(!L) /* �洢����ʧ�� */
		return ERROR;
	L->next=NULL;          /* ָ����Ϊ�� */

	return OK;
}

/* ��ʼ���������Ա�L�Ѵ��ڡ������������LΪ�ձ��򷵻�TRUE�����򷵻�FALSE */
Status ListEmpty(linkList L) {
	if(L->next)
		return FALSE;
	else
		return TRUE;
}

/* ��ʼ���������Ա�L�Ѵ��ڡ������������L����Ϊ�ձ� */
Status ClearList(linkList &L) {
	linkList p,q;
	p=L->next;           /* pָ���һ����� */
	while(p) {              /* û����β */
		q=p->next;
		free(p);
		p=q;
	}
	L->next=NULL;                   /* ͷ���ָ����Ϊ�� */
	return OK;
}

/* ��ʼ���������Ա�L�Ѵ��ڡ��������������L������Ԫ�ظ��� */
int ListLength(linkList L) {
	int i=0;
	linkList p=L->next;           /* pָ���һ����� */
	while(p) {
		i++;
		p=p->next;
	}
	return i;
}

/* ��ʼ���������Ա�L�Ѵ��ڣ�1��i��ListLength(L) */
/* �����������e����L�е�i������Ԫ�ص�ֵ */
Status GetElem(linkList L,int i,ElemType *e) {
	int j;
	linkList p;                 /* ����һ���ָ��p */
	p->next=L;                     /* ��pָ������L�ĵ�һ����� */
	j = 1;                  /* jΪ������ */
	while (p && j<i) { /* p��Ϊ�ջ��߼�����j��û�е���iʱ��ѭ������ */
		p=p->next;
		j++;
	}
	if ( !p || j>i )
		return ERROR; /* ��i��Ԫ�ز����� */
	*e=p->data;                 /* ͨ��eȡ��Ԫ�ص����� */
	return OK;
}

/* ��ʼ���������Ա�L�Ѵ��� */
/* �������������L�е�1����e�����ϵ������Ԫ�ص�λ�� */
/* ������������Ԫ�ز����ڣ��򷵻�ֵΪ0 */
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


/* ��ʼ���������Ա�L�Ѵ���,1��i��ListLength(L)�� */
/* �����������L�е�i��λ��֮ǰ�����µ�����Ԫ��e��L�ĳ��ȼ�1 */
Status ListInsert(linkList &L,int i,ElemType e) {
	int j;
	linkList p,s;
	p = L;
	j = 1;
	while (p&&j<i) {   /* Ѱ�ҵ�i����� */
		p = p->next;
		++j;
	}
	if (!p || j > i)
		return ERROR;   /* ��i��Ԫ�ز����� */
	s = (linkList)malloc(sizeof(Node)); /* �����½��(C���Ա�׼����) */
	s->data = e;
	s->next=p->next;                /* ��p�ĺ�̽�㸳ֵ��s�ĺ�� */
	p->next=s;                     /* ��s��ֵ��p�ĺ�� */
	return OK;
}

/* ��ʼ���������Ա�L�Ѵ��ڣ�1��i��ListLength(L) */
/* ���������ɾ��L�ĵ�i������Ԫ�أ�����e������ֵ��L�ĳ��ȼ�1 */
Status ListDelete(linkList &L,int i,ElemType *e) {
	int j;
	linkList p,q;
	p = L;
	j = 1;
	while (p->next && j < i) { /* ����Ѱ�ҵ�i��Ԫ�� */
		p = p->next;
		++j;
	}
	if (!(p->next) || j > i)
		return ERROR;           /* ��i��Ԫ�ز����� */
	q=p->next;
	p->next=q->next;
	/* ��q�ĺ�̸�ֵ��p�ĺ�� */
	*e=q->data; 			                        /* ��q����е����ݸ�e */
	free(q);                               /* ��ϵͳ���մ˽�㣬�ͷ��ڴ� */
	return OK;
}

/* ��ʼ���������Ա�L�Ѵ��� */
/* ������������ζ�L��ÿ������Ԫ����� */
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
	printf("��ʼ��L��ListLength(L)=%d\n",ListLength(L));
	scanf("%d",&n);
	for(j=1; j<=n; j++) {
		scanf("%d",&t);
		if(ListInsert(L,1,t)!=OK) exit(0);
	}
	printf("��L�ı�ͷ���β���Ԫ�غ�L.data=");
	ListTraverse(L);
	printf("ListLength(L)=%d\n",ListLength(L));
	i=ListEmpty(L);
	printf("L�Ƿ�գ�i=%d(1:�� 0:��)\n",i);
	i=ClearList(L);
	printf("���L��ListLength(L)=%d\n",ListLength(L));
	i=ListEmpty(L);
	printf("L�Ƿ�գ�i=%d(1:�� 0:��)\n",i);
	scanf("%d",&n);
	for(j=1; j<=n; j++) {
		scanf("%d",&t);
		if(ListInsert(L,j,t)!=OK) exit(0);
	}
	printf("��L�ı�β���β���Ԫ�غ�L.data=");
	ListTraverse(L);
	printf("ListLength(L)=%d\n",ListLength(L));
	ListInsert(L,1,0);
	printf("��L�ı�ͷ����0��L.data=");
	ListTraverse(L);
	printf("ListLength(L)=%d\n",ListLength(L));
	GetElem(L,5,&e);
	printf("��5��Ԫ�ص�ֵΪ%d\n",e);
	for(j=1; j<=2; j++) {
		scanf("%d",&t);
		k=LocateElem(L,t);
		if(k)
			printf("��%d��Ԫ�ص�ֵΪ%d\n",k,t);
		else
			printf("û��ֵΪ%d��Ԫ��\n",t);
	}


	k=ListLength(L); /* kΪ�� */
	for(j=k+1; j>=k; j--) {
		i=ListDelete(L,j,&e); /* ɾ����j������ */
		if(i==ERROR)
			printf("ɾ����%d������ʧ��\n",j);
		else
			printf("ɾ����%d����Ԫ��ֵΪ��%d\n",j,e);
	}
	printf("�������L��Ԫ�أ�");
	ListTraverse(L);

	j=5;
	ListDelete(L,j,&e); /* ɾ����5������ */
	printf("ɾ����%d����Ԫ��ֵΪ��%d\n",j,e);

	printf("�������L��Ԫ�أ�");
	ListTraverse(L);

	i=ClearList(L);
	printf("���L��ListLength(L)=%d\n",ListLength(L));

	return 0;
}
