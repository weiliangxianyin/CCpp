#include <stdio.h>
#include <stdlib.h>

#define MAXVEX 30

int visited[MAXVEX]; // ����һ��ȫ�����飬��ʾͼ�еĶ����Ƿ��Ѿ����ʹ���0��ʾû�з��ʣ�1��ʾ�Ѿ�����

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
} VertexNode;

typedef struct Graph {
	int numNodes, numEdges;
	VertexNode AdjList[MAXVEX];
} ALGraph;
void DFS(ALGraph G, int v);
void CreateGraph(ALGraph &G) {
	/*�ú���ƽ̨���ṩ*/
}

int main(void) {
	ALGraph G ;
	scanf("%d %d", &G.numNodes, &G.numEdges);
	CreateGraph(G); //����ͼ�ж����1��ʼ��ţ�����ͼ�����ӱ�
	DFS(G,1); //�ӱ��Ϊ1�Ķ��㿪ʼ�����������ͼ
	return 0;
}
/*���ύ���´���*/
void DFS(ALGraph G, int v) {
	printf("%d ",v);
	visited[v]=1;
	EdgeNode *p=G.AdjList[v].firstEdge;
	while(p!=NULL) {
		if(visited[p->adjvex]==0)
			DFS(G,p->adjvex);
		p=p->next;
	}

}
