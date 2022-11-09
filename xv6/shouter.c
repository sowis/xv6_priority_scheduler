#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char* argv[])
{
    const int my_pid =  getpid();

    while (1) {
        printf(1, "pid %d, priority: %d\n", my_pid, get_proc_priority(my_pid));
    }

    exit();
}