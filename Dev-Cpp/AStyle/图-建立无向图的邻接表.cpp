#include <stdio.h>
#include <stdlib.h>

#define MAXVEX 100 // ��󶥵���,Ӧ���û�����

typedef char VertexType; // ��������Ӧ���û�����
typedef int EdgeType; // ���ϵ�Ȩֵ����Ӧ���û�����

typedef struct EdgeNode { // �߱���
	int adjvex;    // �ڽӵ���,�洢�ö����Ӧ���±�
	EdgeType info;  // ���ڴ洢Ȩֵ,���ڷǼ�Ȩͼ���Բ���Ҫ
	struct EdgeNode *next; // ����,ָ����һ���ڽӵ�
} EdgeNode;

typedef struct VertexNode { // �������
	VertexType data;  // ������,�洢������Ϣ
	EdgeNode *firstEdge; // �߱�ͷָ��
} VertexNode, AdjList[MAXVEX];

typedef struct {
	AdjList adjList;
	int numNodes,numEdges; // ͼ�е�ǰ�������ͱ���
} GraphAdjList;

void  PrintALGraph(GraphAdjList &G) {//��ӡͼ���ڽӱ�
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

/*�ύ���´���*/
void CreateALGraph(GraphAdjList &G) {// ����ͼ���ڽӱ�
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
