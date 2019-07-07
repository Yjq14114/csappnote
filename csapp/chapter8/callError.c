#include "stdio.h"

#include <sys/types.h>

typedef int pid_t;
errno_t errno;
void unix_error(char *msg)
{
    fprintf(stderr, "%s: %s\n", msg, strerror(errno));
}
pid_t Fork(void)
{
    pid_t pid;
    if ((pid=fork()) < 0)
    {
        unix_error("Fork error");
        /* code */
    }
    return pid;
}