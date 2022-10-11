#include <stdio.h>
#include<unistd.h>
#include<sys/types.h>

int main()
{
    fork();
    printf("Program id: %d\n",getpid());
    return 0;
}