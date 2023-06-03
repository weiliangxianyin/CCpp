#include <stdio.h>
#include <stdlib.h>
 
#define OK 1
#define ERROR 0
#define OVERFLOW -2
#define MAXSIZE 100 
typedef int Status;

typedef struct{
	char name[20];
	char sex;
}QElemType;

typedef struct {
    QElemType *base;
    int front; 
    int rear;
} SqQueue;

void InitQueue(SqQueue &Q);

void EnQueue(SqQueue &Q,QElemType e);

void DeQueue(SqQueue &Q,QElemType &e);

void DanceParter(SqQueue Q1,SqQueue Q2);

int QueueEmpty(SqQueue Q);

int main(void) {
    SqQueue Q1,Q2;
    InitQueue(Q1);
    InitQueue(Q2);
    
    int n;
    scanf("%d",&n);	
	QElemType person;
    for(int i=1;i<=n;i++){    
    	scanf("%s %c",&person.name,&person.sex);
		if (person.sex=='m'){
			EnQueue(Q1,person);
		}
		else{
			EnQueue(Q2,person);
		} 	
    }
		
    DanceParter(Q1,Q2);
    
    return 0;
}

void InitQueue(SqQueue &Q){
	Q.base=new QElemType[MAXSIZE];
	Q.front=0;
	Q.rear=0;	 
}

void EnQueue(SqQueue &Q,QElemType e){
	Q.base[Q.rear]=e;
	Q.rear=(Q.rear+1)%MAXSIZE;
}

void DeQueue(SqQueue &Q,QElemType &e){
	e=Q.base[Q.front];
	Q.front=(Q.front+1)%MAXSIZE;
}

int QueueEmpty(SqQueue Q){
	if(Q.rear==Q.front){
		return 1;
	}
	else{
		return 0;
	}
}

void DanceParter(SqQueue Q1,SqQueue Q2){
	while(!QueueEmpty(Q1)&&!QueueEmpty(Q2)){
		QElemType man,woman;
		DeQueue(Q1, man);
        DeQueue(Q2, woman);
		printf("%s %s\n",man.name,woman.name);
	}
	
}
