#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/wait.h>
int sum1=0;
int sum2=0;
int sum3=0;
int sum4=0;
int sum5=0;
int sum6=0;
int sum7=0;
int sum8=0;
int sum9=0;
int sum10=0;

void main(void){
int ffsum=0;
int status;
int fd[2];
int fr[2];
int fm[2];
int fg[2];
int ft[2];
int fs[2];
int fh[2];
int fj[2];
int fy[2];
int fw[2];
pipe(fd);
pipe(fr);
pipe(fm);
pipe(fg);
pipe(ft);
pipe(fs);
pipe(fh);
pipe(fj);
pipe(fy);
pipe(fw);
int arr[1000];
for(int i=0;i<1000;i++){
arr[i]=i;
}
pid_t pid;
pid=fork();

if(pid==0){
printf("CHILD1 PID:%d",getpid());
printf("\n");
for(int p=0;p<100;p++){
sum1=sum1+arr[p];
}
close(fd[0]);
write(fd[1],&sum1,sizeof(sum1));
exit(0);
}

wait(&status);
close(fd[1]);
read(fd[0],&sum1,sizeof(sum1));
ffsum=ffsum+(sum1);

pid=fork();
if(pid==0){
printf("CHILD2 PID:%d",getpid());
printf("\n");
for(int p=100;p<200;p++){
sum2=sum2+arr[p];
}
close(fr[0]);
write(fr[1],&sum2,sizeof(sum2));
exit(0);
}

wait(&status);
close(fr[1]);
read(fr[0],&sum2,sizeof(sum2));
ffsum=ffsum+(sum2);

pid=fork();

if(pid==0){
printf("CHILD3 PID:%d",getpid());
printf("\n");
for(int p=200;p<300;p++){
sum3=sum3+arr[p];
}
close(fm[0]);
write(fm[1],&sum3,sizeof(sum3));
exit(0);
}

wait(&status);
close(fm[1]);
read(fm[0],&sum3,sizeof(sum3));
ffsum=ffsum+(sum3);


pid=fork();

if(pid==0){
printf("CHILD4 PID:%d",getpid());
printf("\n");
for(int p=300;p<400;p++){
sum4=sum4+arr[p];
}
close(fg[0]);
write(fg[1],&sum4,sizeof(sum4));
exit(0);
}

wait(&status);
close(fg[1]);
read(fg[0],&sum4,sizeof(sum4));
ffsum=ffsum+(sum4);

pid=fork();

if(pid==0){
printf("CHILD5 PID:%d",getpid());
printf("\n");
for(int p=400;p<500;p++){
sum5=sum5+arr[p];
}
close(ft[0]);
write(ft[1],&sum5,sizeof(sum5));
exit(0);
}

wait(&status);
close(ft[1]);
read(ft[0],&sum5,sizeof(sum5));
ffsum=ffsum+(sum5);

pid=fork();

if(pid==0){
printf("CHILD6 PID:%d",getpid());
printf("\n");
for(int p=500;p<600;p++){
sum6=sum6+arr[p];
}
close(fs[0]);
write(fs[1],&sum6,sizeof(sum6));
exit(0);
}

wait(&status);
close(fs[1]);
read(fs[0],&sum6,sizeof(sum6));
ffsum=ffsum+(sum6);

pid=fork();

if(pid==0){
printf("CHILD7 PID:%d",getpid());
printf("\n");
for(int p=600;p<700;p++){
sum7=sum7+arr[p];
}
close(fh[0]);
write(fh[1],&sum7,sizeof(sum7));
exit(0);
}

wait(&status);
close(fh[1]);
read(fh[0],&sum7,sizeof(sum7));
ffsum=ffsum+(sum7);

pid=fork();

if(pid==0){
printf("CHILD8 PID:%d",getpid());
printf("\n");
for(int p=700;p<800;p++){
sum8=sum8+arr[p];
}
close(fj[0]);
write(fj[1],&sum8,sizeof(sum8));
exit(0);
}

wait(&status);
close(fj[1]);
read(fj[0],&sum8,sizeof(sum8));
ffsum=ffsum+(sum8);

pid=fork();

if(pid==0){
printf("CHILD9 PID:%d",getpid());
printf("\n");
for(int p=800;p<900;p++){
sum9=sum9+arr[p];
}
close(fy[0]);
write(fy[1],&sum9,sizeof(sum9));
exit(0);
}

wait(&status);
close(fy[1]);
read(fy[0],&sum9,sizeof(sum9));
ffsum=ffsum+(sum9);
pid=fork();

if(pid==0){
printf("CHILD10 PID:%d",getpid());
printf("\n");
for(int p=900;p<1000;p++){
sum10=sum10+arr[p];
}
close(fw[0]);
write(fw[1],&sum10,sizeof(sum10));

exit(0);
}

wait(&status);
close(fw[1]);
printf("PARENT PID:%d",getppid());
read(fw[0],&sum10,sizeof(sum10));
ffsum=ffsum+(sum10);
printf("\nFINAL SUM:");
printf("%d",ffsum);
printf("\n");
exit(1);

}
