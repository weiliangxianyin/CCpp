#include "stdio.h"
struct goods
{
    int num;
    char name[20];
    float original_price;
    float discount_price;
    float discount;
};

void Input(struct goods goods_array[],int n);
void Update(struct goods goods_array[],int n);
void Calculate(struct goods  goods_array[],int n);
void Sort(struct goods  goods_array[],int n);
int Delete(struct goods  goods_array[],int n, int num);
void Output(struct goods  goods_array[],int n);

int main()
{
    int n;
    struct goods goods_array[10];
    scanf("%d",&n);
    Input(goods_array, n);
    Update(goods_array, n);
    Calculate(goods_array, n);
    printf("\n");
    Output(goods_array, n);
    printf("\n");
    if(Delete(goods_array,n, 2001002)) 
       n=n-1;
    Output(goods_array, n);
    printf("\n");
    Sort(goods_array, n);
    Output(goods_array, n);
    printf("\n");
    return 0;
}

void Input(struct goods goods_array[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d %s %f %f",&goods_array[i].num,goods_array[i].name,&goods_array[i].original_price,&goods_array[i].discount); 
    }
}

void Output(struct goods  goods_array[],int n) 
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d %s %.2f %.2f %.2f\n",goods_array[i].num,goods_array[i].name,goods_array[i].original_price,goods_array[i].discount_price,goods_array[i].discount);
    }
}  
int Delete(struct goods goods_array[], int n, int num) {
    int i, j;
    for (i = 0; i < n; i++) {
        if (goods_array[i].num == num) {
            for (j = i; j < n - 1; j++) {
                goods_array[j] = goods_array[j + 1];
            }
            return 1;
        }
    } 
    return 0;
}

