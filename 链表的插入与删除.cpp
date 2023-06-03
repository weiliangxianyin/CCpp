int listinsert(sqlist &l,int i,elemtype e){
	linklist p=l;
	j=0;
	while(p&&j<i-1){
		p=p->next;
		++j;
	} 
	if(!p&&j>i-1)return error;
	s=new lnode;
	s->data=e;
	s->next=p->next;
	p->next=s;
	return ok;
}

int listdelete(sqlist &l,int i){
	linklist p=l;
	j=0;
	while(p->next&&j<i-1){
		p=p->next;
		++j;
	}
	if(!p->next||j>i-1)return error;
	q=p->next;
	p->next=q->next;
	delete q;
	return ok;
}


