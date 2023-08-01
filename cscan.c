#include<stdio.h>
#include<stdlib.h>
int main()
{
    int RQ[100],i,j,n,TotalHeadMoment=0,initial,size,move;
     printf("Enter the number of requests:\n");
    scanf("%d",&n);
    printf("Enter the requests sequence\n");
    for(i=0;i<n;i++)
       scanf("%d",&RQ[i]);
    printf("Enter initial head position\n");
    scanf("%d",&initial);
    printf("Enter the total disk size\n");
    scanf("%d",&size);
    printf("Enter the head movement direction for high 1 and for low 0\n");
    scanf("%d",&move);

    //logic for C-scan disk scheduling
    /*logic for sort the request array*/
    for(i=0;i<n;i++)
    {
        
    }
}