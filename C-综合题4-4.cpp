Delete(struct book books_array[],int n, char ISBN[]){
    for(int i=0;i<n;i++){
        if(strcmp(books_array[i].ISBN, ISBN) == 0){
            for (int j = i + 1; j < n; j++) {
                    books_array[j - 1] = books_array[j];
                    }
        }
    }
    
}
