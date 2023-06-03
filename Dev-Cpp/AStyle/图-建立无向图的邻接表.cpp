#include <stdio.h>
#include <stdlib.h>

#define MAXVEX 100 // 最大顶点数,应由用户定义

typedef char VertexType; // 顶点类型应由用户定义
typedef int EdgeType; // 边上的权值类型应由用户定义

typedef struct EdgeNode { // 边表结点
	int adjvex;    // 邻接点域,存储该顶点对应的下标
	EdgeType info;  // 用于存储权值,对于非加权图可以不需要
	struct EdgeNode *next; // 链域,指向下一个邻接点
} EdgeNode;

typedef struct VertexNode { // 顶点表结点
	VertexType data;  // 顶点域,存储顶点信息
	EdgeNode *firstEdge; // 边表头指针
} VertexNode, AdjList[MAXVEX];

typedef struct {
	AdjList adjList;
	int numNodes,numEdges; // 图中当前顶点数和边数
} GraphAdjList;

void  PrintALGraph(GraphAdjList &G) {//打印图的邻接表
	int i;
	EdgeNode *e;
	for(i = 0; i < G.numNodes; i++) {
		printf("%c|",G.adjList[i].data);
		e = G.adjList[i].firstEdge;
		while(e!=NULL) {
			printf("(%d,%d)",i,e->adjvex);
			e=e->next;
		}
		printf("\n");
	}
}

void CreateALGraph(GraphAdjList &G);
int main(void) {
	GraphAdjList G;
	CreateALGraph(G);
	PrintALGraph(G);
	return 0;
}

/*提交以下代码*/
void CreateALGraph(GraphAdjList &G) {// 建立图的邻接表
	scanf("%d %d\n",&G.numNodes,&G.numEdges);
	int i;
	for(i = 0; i < G.numNodes; i++) {
		scanf("%c",&G.adjList[i].data);
		G.adjList[i].firstEdge=NULL;
	}

	for(i=0; i<G.numEdges; i++) {
		int u,v;
		scanf("%d%d",&u,&v);

		EdgeNode *e1=new EdgeNode;
		EdgeNode *e2=new EdgeNode;
		e1->adjvex=v;
		e2->adjvex=u;
		e1->next=G.adjList[u].firstEdge;
		e2->next=G.adjList[v].firstEdge;
		G.adjList[u].firstEdge=e1;
		G.adjList[v].firstEdge=e2;
	}
}
