# csappnote
csapp note

### gdb调试教程

1. 开启core，采集程序崩溃的状态

   首先开启core崩溃状态采集 ，使用命令 ulimit -c 查看 ，如果是0表示没有开启

   开启操作如下

   ```shell
   suto vim /etc/profile
   # 在文件最后一行添加
   # No core files by default 0, unlimited is oo
   ulimit -S -c unlimited > /dev/null 2>&1
   su root
   
   vi /etc/sysctl.conf
   Shift + G
   i
   
   # open, add core.pid 
   kernel.core_pattern = ./core_%t_%p_%e
   kernel.core_uses_pid = 1
   wq!
   sysctl -p /etc/sysctl.conf
   ## 出现以下情况表示成功
      ┌─[yjq@yjq-X555LP] - [~/code/csappnote] - [六 10月 27, 22:12]
   └─[$] <git:(master)> ulimit -c
   unlimited
   ┌─[yjq@yjq-X555LP] - [~/code/csappnote] - [六 10月 27, 22:28]
   └─[$] <git:(master*)> cat /proc/sys/kernel/core_uses_pid
   1
   ```

2. gdp

   最常用的命令：

   l 查看源码

   b 设置断点

   r 开始运行程序

   n 下一个断点（不会进入子函数）

   s 下一个断点（进入子函数）

   c 跳过直到下一个断点处

3. 调试内存堆栈信息

   info args 查看当前函数参数值

    - info locals 看当前函数栈上值
    - info registers 查看寄存器值