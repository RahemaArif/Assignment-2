Concurrency (Basic):
Concurrency and parallelism are often conceived as same terms but they are a lot different from eachother.
"Concurrency means that an application is making progress on more than one task at the same time. Basically it is the act of running multiple computations at the same time(not simultaneously)."
This means that more than one task is being processed at the samae time (concurrently). The application may not make progress on more than one task at the same time but more than one task is being processed at a time inside the application if the CPU is only one. It does not completely finsih one task before beginning next one.

Parallelism (Basic):
It is defined as:
Parallelism means that an application splits its tasks up into smaller tasks which can be processed in parallel i.e. on multiple CPU's sat the exact same time. In short it is the act of running multiple computations simultaneously.

Concurrency (Acheived By):
Concurrency is acheived thorugh interleaviing opeerations i.e. it divdes meomory into small chunks. Concuurrency is related to how an application handlles one task at a time (sequentially) or may work on multiple tasks concurrently.
          An application can be concurrent but not parallel. This means that it proccess one or more tasks at a time but they are not broken into subtasks.

Parallelism (Achieved By):
Parallelism uses multiple CPU's. It is related to how an application handles each task. It may process the task from the start to end or split it into subtasks which can be completed in parallel.
          An application can be parallel but not concurrent i.e. it works on only one task at a time which is broken into subtasks and can be solved parallel.
Concurrency (Advantage):
It allows increased amount of work accomplished at a time.

Parallelism (Advantage):
It improves throughout computational speed.

Concurrency (Processing units required):
Probably only a single processor is required.

Parallelism (Processing units required):
Multiple processors are used to complete tasks.

Concurrency (Example):
Running multiple applications at the same time.

Parallelism (Example):
Multiple threads can be run on the available processors to speed up the computation.

Q:How to reset refresh time of top command?
Ans: Delay command line option of top command is used to change the refresh time of top command i.e. time between top's updates.
Syntax: top -d time in sec

Q:Set your top command refresh time to 10 sec?
Ans: top -d 10

Q: What does Ctrl+D do?
Ans: Unlike Ctrl+C (interrupt signal) or Ctrl+Z(which pauses the program running in forground) basically it is end of file E.O.F in a process. Such as if we press Ctrl+D in terminal it exits it, specifying that you are not going to write any more commands. It closes the stdin pipe, which means Ctrl+D was hit(assuming ther is a keyboard on the other end of the pipe). It has no effect if the program is not reading input from the terminal. 

Q:How to send signals to a background process?
Ans: Kill is a command that is used to send signals to a running process.

Q:What is the STOP signal for a background process?
Ans: Backgrouund processes can be stopped by using the following :
 kill -STOP PID (process id)
 or:
 kill -19 PID (process id)
 
 Q:What will be the output of the following?
 for(int i=0;i<4;i++){
 fork();
 printf("Hello \n");
 }
 printf("Exit \n");
 }
 ![GitHub Logo](/Downloads/Blank Diagram.png)
Format: ![Alt Text](url)

output:
Hello , Hello, Hello,  Hello , Exit, Hello, Exit, Hello, Hello, Exit, Hello, Exit, Hello, Hello, Hello, Exit, Hello, Exit, Hello, Hello, Exit, Hello, Exit, Hello, Hello, Hello, Hello, Exit, Hello, Exit, Hello, Hello, Exit, Hello, Exit, Hello, Hello, Hello, Exit, Hello, Exit, Hello, Hello, Exit, Hello, Exit
30 HELLO'S & 16 EXITS
