#include <stdio.h>
#include <stdlib.h>

struct ListNode {
	int data;
	struct ListNode *next;
};

struct ListNode *readlist();

void printlist( struct ListNode *L ) {
	struct ListNode *p = L;
	while (p!=NULL) {
		printf("%d ", p->data);
		p = p->next;
	}
	printf("\n");
}

int main() {
	struct ListNode *L;
	L = readlist();
	printlist(L);

	return 0;
}
struct ListNode *readlist() {
	int x;
	struct ListNode *head = NULL; // ͷ���ָ��
	while (scanf("%d", &x) == 1 && x != -1) {
		struct ListNode *p = (struct ListNode *) malloc(sizeof(struct ListNode));
		p->data = x;
		p->next = head; // ���½�����ͷ��
		head = p;
	}
	return head;
}


