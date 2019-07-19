**1. List all of the main states a process may be in at any point in time on a standard Unix system. Briefly explain what each of these states means.**
CREATED - 
In this state, the process awaits admission to the "ready" state. Admission will be approved or delayed by a long-term, or admission, scheduler.

READY -
A "ready" or "waiting" process has been loaded into main memory and is awaiting execution on a CPU.

RUNNING - 
A process moves into the running state when it is chosen for execution. The process's instructions are executed by one of the CPUs or cores of the system.

BLOCKED - 
A process transitions to a blocked state when it cannot carry on without an external change in state or event occurring.

TERMINATED -
A process may be terminated, either from the "running" state by completing its execution or by explicitly being killed. In either of these cases, the process moves to the "terminated" state.


**2. What is a zombie process?**
The child process has died but has not yet been reaped. They are leftover bits of dead processes that haven’t been cleaned up properly.


**3. How does a zombie process get created? How does one get destroyed?**
A process which has finished the execution but still has entry in the process table to report to its parent process is known as a zombie process. A child process always first becomes a zombie before being removed from the process table.

Zombie process is destroyed either by the parent reaping the child process or the children will be adopted by the init process which reaps any zombie children.


**4. What are some of the benefits of working in a compiled language versus a non-compiled language? More specifically, what benefits are there to be had from taking the extra time to compile our code?**
A compiled language is a programming language whose implementations are typically compilers. The benefits of using a compiler to compile code is that it generally runs faster than non compiled code as it doesn't need to work it out on the fly as the application is running. With compiled code, you need to find where the code is kept, change it, compile it and redeploy the program.

The compiled program has also been checked for errors while it is being compiled. If there are any commands that the compiler doesn't like then they will be reported. This will enable you to fix all coding errors before getting a fully running program.
Just because a program has compiled successfully doesn't mean that it will logically run the way you expect it to so you still need to test your application.

Non compiled language interpreters, step-by-step executors of source code, where no pre-runtime translation takes place. In general, it is considered that interpreted code will run more slowly than compiled code because it has to actively perform the step of turning the code into something the machine can handle on the fly as opposed to compiled code which can just run. Another benefit is that the code is always available for reading and it can be easily changed to work the way you want it to. With interpreted code, you open the program, change it and it is ready to go.


