#define maxsize 100
typedef struct{
	qelemtype *base;
	int	rear;
	int	front;		
	
}sqqueue; 

status initqueue(squeue &q){
	q.base=new qelemtype[maxsize];
	q.rear=q.front=0;
	return ok;
}

status enqueue(squeue &q,qelemtype e){
	if((q.rear+1)%maxsize==q.front)return error;
	q.base[q.rear]=e;
	q.rear=(q.rear+1)%maxsize;
	return ok;
	
}

status dequeue(sqqueue &q,qelemype &e){
	if(q.front==q.rear)return error;
	e=q.base[q.front];
	q.front=(q.front+1)%maxsize;
	return ok; 
	
}


