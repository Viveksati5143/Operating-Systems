#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
    int evensum=0;
    int oddsum=0;
    int a[5]={6,7,8,9,10};
    int x=fork();
    if(x!=0)
    {
        for(int i=0;i<5;i++)
        {
            if(a[i]%2==0)
            {
                evensum+=a[i];
            }
            
        }
        printf("Even Sum = %d and Process id = %d\n",evensum,getpid());
        // child process must calculate the sum of even numbers 
    }
    else
    {
       for(int i=0;i<5;i++)
        {
            if(a[i]%2!=0)
            {
                oddsum+=a[i];
            }
        }
        printf("Odd Sum = %d and Process id = %d\n",oddsum,getpid());
        //  parent process -sum of odd numbers.
    }
    return 0;
}