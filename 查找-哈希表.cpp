#include <stdio.h>

#define NULLKEY 0
#define HASHSIZE 20

typedef struct data {
	int key;
} HashTable[HASHSIZE];
void InsertHash(HashTable &H,int key);
int SearchHash(HashTable H,int key);
void InitHashTable(HashTable &H) {
	int i;
	for(i=0; i<HASHSIZE; i++)
		H[i].key=NULLKEY;
}

/*散列函数*/
int Hash(int key) {
	return key % 19; /* 除留余数法 */
}

int main(void) {
	HashTable H;
	int n,i,key,result;
	InitHashTable(H);
	scanf("%d",&n);
	for(i=1; i<=n; i++) {
		scanf("%d",&key);
		InsertHash(H,key);
	}
	scanf("%d",&key);
	result=SearchHash(H,key);
	if (result==-1)
		printf("%d:fail",key);
	else
		printf("%d:%d",key,result);
	return 0;
}
/*仅提交以下代码*/
void InsertHash(HashTable &H, int key) {
	int index=Hash(key);
	while(H[index].key!=NULLKEY)
		index=(index+1)%HASHSIZE;
	H[index].key=key;
}

int SearchHash(HashTable H, int key) {
	int index=Hash(key);
	while (H[index].key!=NULLKEY) {
		if(H[index].key==key)
			return index;
		index=(index+1)%HASHSIZE;
	}
	return -1;
}
