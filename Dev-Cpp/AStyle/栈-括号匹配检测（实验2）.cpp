#include <stdio.h>
#include <stdlib.h>
#define INIT_SIZE  80
#define OK 1
#define ERROR -1
#define TRUE 1
#define FALSE 0

typedef char SElemType;
typedef int Status;
typedef struct {
	SElemType *base;  // ջ��ָ��
	SElemType *top;  //ջ��ָ��
	int stackSize; // ջ�ĳ�ʼ��������
} SqStack;

Status initStack(SqStack &s);
Status stackEmpty(SqStack s);
Status stackFull(SqStack s);
Status push(SqStack &s,SElemType e);
Status pop(SqStack &s, SElemType &e);
int bracketMatch(SElemType *str, SqStack &stk);

int main(void) {
	int result;
	SElemType str[81];
	SqStack stk;
	initStack(stk);
	scanf("%d",str);
	result = bracketMatch(str,stk);
	if(result) printf("Yes");
	else printf("No");
	return 0;
}

Status initStack(SqStack &s) {
	s.base= (SElemType*) malloc(INIT_SIZE*sizeof(SElemType));
	if (s.base == NULL) return ERROR;
	s.top = s.base;
	s.stackSize = INIT_SIZE;
	return OK;
}

Status stackFull(SqStack s) {
	if(s.top-s.base == s.stackSize) return TRUE;
	return FALSE;
}
/*�ύ���´���*/
Status stackEmpty(SqStack s) {
	if(s.base==s.top)return TRUE;
	return FALSE;
}

Status push(SqStack &s,SElemType e) {
	if (stackFull(s))  return ERROR;
	*(s.top)=e;
	s.top++;
	return OK;
}

Status pop(SqStack &s, SElemType &e) {
	if(stackEmpty(s))  return ERROR;
	s.top--;
	e=*(s.top);
	return OK;
}

int bracketMatch(SElemType *str, SqStack &stk) {
	for(int i=0; str[i]!='\0'; i++) {
		if(str[i]=='(' || str[i]=='[' || str[i]=='{') {
			push(stk,str[i]);	// ��ջ
		} else if(str[i]==')' || str[i]==']' || str[i]=='}') {
			SElemType e;
			if(pop(stk, e)==ERROR) return FALSE;
			if(str[i]==')' && e!='(' || str[i]==']' && e!='[' || str[i]=='}' && e!='{') {
				return FALSE;// ���ջ�գ����������������ţ��򷵻�0������{��ջ������������Ų�ƥ���򷵻�0}
			}
		}
	}
	if(stackEmpty(stk)) return 1;
	else return 0;  // ���ջ�շ���1���������������������ţ�����0
}
