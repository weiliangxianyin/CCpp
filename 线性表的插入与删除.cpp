int listinsert(sqlist &l,int i,elemtype e){
	if(i<1||i>l.length+1)return error;
	if(l.length==maxsize)return error;
	for(int j=l.length-1;j>=i-1;j--){
		l.elem[j+1]=l.elem[j]; 
	}
	l.elem[i-1]=e;
	++l.length;
	return ok;
}

int listdelete(sqlist &l,int i){
	if(i<1||i>l.length)return error;
	for(int j=i;j<l.length-1;j++){
		l.elem[j-1]=l.elem[j];
	}
	--length;
	return ok;
}






