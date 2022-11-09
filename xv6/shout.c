#include "types.h"
#include "stat.h"
#include "user.h"

char *args[] = { "shouter", 0 };

int
main(int argc, char **argv)
{
  if(argc < 2){
    printf(2, "usage: shout shouter_count\n");
    exit();
  }

  const int shouter_count = atoi(argv[1]);

  for (int i = 0; i < shouter_count - 1; ++i) {
    const int fork_status = fork();
    if (fork_status == -1) { // fail
        printf(2, "fail to create process\n");
    }
    else if (fork_status == 0) { // child
        exec("shouter", args);
    }
    else { // parent
        continue;
    }
  }

  exec("shouter", args);

  exit();
}
