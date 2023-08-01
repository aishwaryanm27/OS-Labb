#include<stdio.h>
#include<stdlib.h>

int main(){
    int RQ[100],i,j,n,TotalHeadMoment=0,initial,size,move;
    printf("Enter the number of requestes: \n");
    scanf("%d",&n);
    printf("Enter request Sequence\n");
    for(i=0;i<n;i++)
    scanf("%d",&RQ[i]);
    printf("Enter intial head position\n");
    scanf("%d",&initial);
    printf("Enter total disk size\n");
    scanf("%d",&size);
    printf("Enter the head movement direction for high 1 and low 0\n");
    scanf("%d",&move); 

    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++)
        {
            if(RQ[j]>RQ[j+1])
            {
                int temp;
                temp=RQ[j];
                RQ[j]=RQ[j+1];
                RQ[j+1]=temp;
            }
        }
    }
    int index;
    for(i=0;i<n;i++){
        if(initial<RQ[i]){
            index=i;
            break;
        }
    }
    if (move==1){
        printf("Sequence of request access: \n");
        for(i=index;i<n;i++){
            printf("%d",RQ[i]);
            TotalHeadMoment=TotalHeadMoment+abs(RQ[i]-initial);
            initial=RQ[i];
        }
        TotalHeadMoment=TotalHeadMoment+abs(size-RQ[i-1]-1);
        initial=size-1;
        for(i=index-1;i>=0;i--){
            printf("%d",RQ[i]);
            TotalHeadMoment=TotalHeadMoment+abs(RQ[i]-initial);
            initial=RQ[i];
        }
    }
    else{
        printf("Sequence of request access: \n");
        for(i=index-1;i>=0;i--)
        {
            printf("%d",RQ[i]);
            TotalHeadMoment=TotalHeadMoment+abs(RQ[i]-initial);
            initial=RQ[i];
        }
        TotalHeadMoment=TotalHeadMoment+abs(RQ[i+1]-0);
        initial=0;
        for(i=index;i<n;i++){
            printf("%d",RQ[i]);
            TotalHeadMoment=TotalHeadMoment+abs(RQ[i]-initial);
            initial=RQ[i];
        }
    }
    printf("\nTotal head movement is %d",TotalHeadMoment);
    return 0;
}

