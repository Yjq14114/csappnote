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
 * wnohang 如果等待集合中的任何子进程都还没有终止，那么就立即返回
 * wuntraced 挂起调用进程的执行，直到等待集合中的一个进程变成已终止或者被停止
 * wcontinued 挂起调用进程的执行，直到等待集合中一个正在运行的进程终止或等待集合中一个被停止的进程收到SIGCont信号重新开始执行
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