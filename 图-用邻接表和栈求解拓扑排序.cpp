#include <stdio.h>
#include <stdlib.h>

#define MAXVEX 100
#define INFINITY 65535

typedef struct EdgeNode { // 表结点

	int adjvex;    // 邻接点域，存储该顶点对应的下标
	int weight;     // 用于存储权值，对于非网图可以不需要
	struct EdgeNode *next; // 链域，指向下一个邻接点
} EdgeNode;

typedef struct VertexNode { // 头结点
	int inDegree; // 顶点入度
	int data; // 顶点域，存储顶点信息
	EdgeNode *firstEdge; // 头指针
} VertexNode;

typedef struct Graph {
	int numNodes, numEdges;
	VertexNode AdjList[MAXVEX];
} GraphAdjList;

void CreateALGraph(Graph &G) {
	int i , j , k ;
	for(i = 0; i < G.numNodes; i++) {
		G.AdjList[i].firstEdge = NULL; // 初始化表的头指针为空
		G.AdjList[i].inDegree = 0; // 初始化顶点的入度为0
	}

	for(k = 0; k < G.numEdges; k++) { // 假设采用头插入法
		scanf("%d%d", &i, &j) ;
		EdgeNode *p = (EdgeNode *)malloc(sizeof(EdgeNode));
		p->adjvex = j ;
		p->next = G.AdjList[i].firstEdge;
		G.AdjList[i].firstEdge = p;
		G.AdjList[j].inDegree ++; // 编号为j的顶点入度增加1
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

// 拓扑排序，输出拓扑排序序列，如果G没有回路并返回1，否则返回0。
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
			if (--G.AdjList[v].inDegree == 0) { // 如果减1后入度变为0，则入栈
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
