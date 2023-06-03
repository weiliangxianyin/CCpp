#include <stdio.h>
int main(void) {
    int park[3][5];
    for(int i=0;i<3;i++){
        for(int j=0;j<5;j++){
            scanf("%d",&park[i][j]);
        }
    }
    int max=0, free=0;
    int row=-1;
    for(int i=0;i<3;i++){
        free=0;
        for(int j=0;j<5;j++){
            if(park[i][j]==0){
                free++;
            }
        }
        if(max<free){
            max=free;
            row=i;
        }
    }
    printf("row=%d,free=%d",row+1,max);
    return 0;
}

