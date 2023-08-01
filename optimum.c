#include<stdio.h>
#include<stdbool.h>
int findIndex(int frames[],int n,int page)
{
    for(int i=0;i<n;i++)
    {
        if(frames[i]==page)
        return i;
    }
    return -1;
}
void printFrames(int Frames[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(frames[i]==-1)
        printf("-");
        elseprintf("%d",frames[i]);
    }
}
   