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

