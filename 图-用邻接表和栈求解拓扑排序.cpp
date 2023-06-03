#include <stdio.h>
#include <stdlib.h>

#define MAXVEX 100
#define INFINITY 65535

typedef struct EdgeNode { // ����

	int adjvex;    // �ڽӵ��򣬴洢�ö����Ӧ���±�
	int weight;     // ���ڴ洢Ȩֵ�����ڷ���ͼ���Բ���Ҫ
	struct EdgeNode *next; // ����ָ����һ���ڽӵ�
} EdgeNode;

typedef struct VertexNode { // ͷ���
	int inDegree; // �������
	int data; // �����򣬴洢������Ϣ
	EdgeNode *firstEdge; // ͷָ��
} VertexNode;

typedef struct Graph {
	int numNodes, numEdges;
	VertexNode AdjList[MAXVEX];
} GraphAdjList;

void CreateALGraph(Graph &G) {
	int i , j , k ;
	for(i = 0; i < G.numNodes; i++) {
		G.AdjList[i].firstEdge = NULL; // ��ʼ�����ͷָ��Ϊ��
		G.AdjList[i].inDegree = 0; // ��ʼ����������Ϊ0
	}

	for(k = 0; k < G.numEdges; k++) { // �������ͷ���뷨
		scanf("%d%d", &i, &j) ;
		EdgeNode *p = (EdgeNode *)malloc(sizeof(EdgeNode));
		p->adjvex = j ;
		p->next = G.AdjList[i].firstEdge;
		G.AdjList[i].firstEdge = p;
		G.AdjList[j].inDegree ++; // ���Ϊj�Ķ����������1
	}
}

struct stack {
	int* base;
	int* top;
	int maxsize;
};
void init(struct stack &s) {
	s.base=new int[MAXVEX];
	s.top=s.base;
	s.maxsize=MAXVEX;
}
void push(struct stack &s,int e) {
	if(s.top-s.base!=s.maxsize) {
		*s.top=e;
		s.top++;
	}
}
int stackempty(struct stack s) {
	if(s.top==s.base) {
		return 1;
	}
	return 0;
}
void pop(struct stack &s,int &e) {
	if(s.base!=s.top) {
		s.top--;
		e=*s.top;
	}
}

// ����������������������У����Gû�л�·������1�����򷵻�0��
int TopologicalSort(GraphAdjList G) {
	struct stack s;
	init(s);
	int count=0;
	for(int i=0; i<G.numNodes; i++) {
		if(G.AdjList[i].inDegree == 0) {
			push(s, i);
		}
	}
	while(stackempty(s)==0) {
		int u;
		pop(s,u);
		printf("%d ",u);
		count++;
		EdgeNode*p=G.AdjList[u].firstEdge;
		while(p!=NULL) {
			int v = p->adjvex;
			if (--G.AdjList[v].inDegree == 0) { // �����1����ȱ�Ϊ0������ջ
				push(s, v);
			}
			p = p->next;
		}
	}
	printf("\n");
	if(count<G.numNodes) return 0;
	else return 1;
}

int main(void) {
	GraphAdjList G;
	scanf("%d %d",&G.numNodes,&G.numEdges);
	CreateALGraph(G);
	int result = TopologicalSort(G);
	if (result==1) printf("No Cycle\n");
	else printf("Cycle\n");
	return 0;
}
