#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *readlist();

void printlist( struct ListNode *L )
{
     struct ListNode *p = L;
     while (p!=NULL) {
           printf("%d ", p->data);
           p = p->next;
     }
     printf("\n");
}

int main()
{
    struct ListNode *L;
    L = readlist();
    printlist(L);

    return 0;
}
