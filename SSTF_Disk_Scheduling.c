#include<stdio.h>
#include<stdlib.h>
int main()
{
    int RQ[100], i, n, TotalHeadMoment=0, initial, count=0;
    printf("Enter the number of Requests\n");
    scanf("%d",&n);
    printf("Enter the Requests sequence\n");
    for(i=0;i<n;i++) scanf("%d",&RQ[i]);
    printf("Enter initial head position\n");
    scanf("%d",&initial);
    
    while(count!=n){
        int min=1000,d,index;
        for(i=0;i<n;i++){
            d=abs(RQ[i]-initial);
            if(min>d){
                min=d;
                index=i;
            }
        }
        TotalHeadMoment+=min;
        initial=RQ[index];
        RQ[index]=1000;
        count++;
    }    
    printf("Total head movement is %d",TotalHeadMoment);
    return 0;
}