struct BSemaphore
{
    enum value(0,1);
    Queue type L;
};

Down(BSemaphore S)
{
    if(S.value==1)
    {
        S.value=0;
    }
    else
    {
        put the process(PCB) in S.L;
        sleep();
    }    
}

UP(BSemaphore S)
{
    if(S.L is empty)
    {
        S.value=1;
    }
    else
    {
        Select a process from S.L;
        Wake_up();
    }    
}