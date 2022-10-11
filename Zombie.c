#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>

int main()
{
    int x = fork();

    if (x==0)
    {
        printf("Process id of Child: %d\n",getpid());
        printf("Process id of Parent: %d\n",getppid());
    }
    else
    {
        sleep(5);
        printf("Process id of Parent: %d\n",getpid());
    }
    return 0;        
}