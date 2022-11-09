#include "types.h"
#include "defs.h"

void
speak(const int pid)
{
    cprintf("pid %d, priority: %d\n", pid, get_proc_priority(pid));
}

int
sys_speak(void) 
{
    int pid;

    if(argint(0, &pid) < 0)
        return -1;

    speak(pid);
    return 0;
}