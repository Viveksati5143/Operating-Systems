#define N 2
#define TRUE 1
#define FALSE 0
int interested[N] = FALSE; 
int turn;

void Entry_section(int process)
{
    int other=1-process;
    interested[process]=TRUE;
    turn =process;
    while(interested[other]=TRUE && turn=process);
}
Critical Section

void Exit_section(int process)
{
    interested[process]=FALSE;
}