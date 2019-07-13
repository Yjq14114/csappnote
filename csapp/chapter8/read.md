##  检查已回收子进程的退出状态

WIFEXITED(status): 如果子进程通过调用exit或者一个返回return 正常终止，就返回真

w-if-exited

WEXITESTATUS(status): 返回一个正常终止的子进程的退出状态，只有在WIFEXITED()返回真时，才会定义这个状态

W-exite-status

WIFSIGNALED(status): 如果子进程是因为一个未被捕获的信号终止的，那么就返回真

w-if-signaled

WTERMSIG(status): 返回导致子进程终止的信号的编号。只有在WIFSIGNALED()返回真时，才定义这个状态。

w-termsig

WIFSTOPPED(status): 如果引起返回的子进程当前是停止的，那么就返回真

w-if-stopped

WSTOPSIG(status): 返回引起子进程停止的信号的编号。只有在WIFSTOPPED()返回真时，才定义这个状态

w-stop-sig

WIFCONTINUED(status): 如果子进程收到SIGCONT信号重新启动，则返回真

w-if-continued

ECHILD

## 错误条件

如果调用进程没有子进程，那么waitpid 返回-1，并且设置errno为ECHILD.如果waitpid函数被一个信号中断，那么它返回-1，并设置errno为EINTR


```c
/**
 * 因为第一个参数是-1, 所以对waitpid的调用会阻塞，直到任意一个子进程终止
 * 在每个子进程终止时，对waitpid的调用会返回，返回值为该子进程的非零pid
 */
waitpid(-1, &status, 0)

```

## 让进程休眠

```c
#include <unistd.d>
unsigned int sleep(unsigned int secs); 		
																					// 返回: 还要休眠的秒数
```



```c
#include <unistd.h>

int pause(void);
																					// 总是返回-1
```

## 加载并运行程序

execve 函数在当前进程的上下文中加载并运行一个新程序

```c
#include <unistd.h>
int execve(const char *filename, const char *argv[], const char *envp[]);
																				// 如果成功 则不返回，如果失败则返回-1
```

操作环境数组

```c
#include <stdlib.h>

char *getenv(const char *name);
								// 若存在则为指向name的指针，若无匹配，则返回null
```

```c
#include <stdlib.h>
int setenv(const char *name, const char *newvalue, int overwrite);
								// 返回若成功则返回0，失败则为-1
```

```c
void unsetenv(const char *name);
```

