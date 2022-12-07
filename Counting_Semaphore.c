struct CSemaphore
{
    int value;
    queue type L;
};

Down(CSemaphore S)
{
    S.value=S.value-1;
    if (S.value<0)
    {
        put_process(PCB) in L;
        sleep();
    }
    else
    {
        return;
    }
    UP(CSemaphore S)
    {
        S.value=S.value+1;
        if(S.value<=0)
        {
            Select a process from L;
            Wake_up();
        }
    } 
}