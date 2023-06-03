Sort(struct book books_array[], int n) {
    int i, j;
    struct book t;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (books_array[j].price < books_array[j + 1].price) {
                t = books_array[j];
                books_array[j] = books_array[j + 1];
                books_array[j + 1] = t;
            }
        }
    }
}
