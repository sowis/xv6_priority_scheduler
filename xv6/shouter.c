#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char* argv[])
{
    const int my_pid =  getpid();

    while (1) {
        speak(my_pid);
    }

    exit();
}