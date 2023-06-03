#include "stdio.h"
struct meeting_room
{
        int num;                    /*±‡∫≈*/
        int size;                    /*¥Û–°*/
};
int main()
{
        struct meeting_room room,max,min;
        int i;
        for(i=0;i<3;i++)
        {
                scanf("%d %d",&room.num,&room.size);
                if(i==0)
                {
                        max=room;
                        min=room;
                }
                else
                {
                        if(room.size > max.size)
                        {
                               max=room;
                        }
                        if(min.size>room.size)
                        {
                                min=room;
                        }
                }
        }
        printf("The maximum size of meeting room is: %d %d\n",max.num,max.size);
        printf("The minimum size of meeting room is: %d %d\n",min.num,min.size);
        return 0;
}
