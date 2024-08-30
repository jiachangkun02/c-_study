//
// Created by jiachangkun on 2024/8/12.
//
#include "queue.h"

void testqueue()
{
    queue q1;
    queueinit(&q1);
    pushqueue(&q1,3);
    pushqueue(&q1,2);
    pushqueue(&q1,1);
    pushqueue(&q1,6);
    pushqueue(&q1,7);
    pushqueue(&q1,9);
    while(!queueempty(&q1))
    {
        cout<<queuefront(&q1)<<" ";
        popqueue(&q1);
    }


}


int main()
{
    testqueue();
    return 0;
}