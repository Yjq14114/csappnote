#include "stdio.h"

#include <sys/types.h>

typedef int pid_t;
errno_t errno;
void unix_error(char *msg)
{
    fprintf(stderr, "%s: %s\n", msg, strerror(errno));
}
/**
 * 打印异常
 */

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
/**
 * @note fork函数的特点
 * 1.调用一次,返回两次
 * 2.并发执行
 * 3.相同但是独立的地址空间
 * 4.共享文件
 */
int main()
{
    pid_t pid;
    int x = 1;
    pid = Fork();
    if (pid == 0)
    {
        /* child */
        printf("child : x=%d\n", ++x);
        exit(0);
    }
    /*parent */
    printf("parent: x=%d\n", --x);
    exit(0);
}