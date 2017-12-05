#include<sys/types.h>
#include<sys/shm.h>
#include<sys/ipc.h>
#include<stdio.h>
struct user_cmd_s
{
int a;
int b;
};
int main()
{
struct user_cmd_s *user_cmd_t;
int shmid=0;
int *shm=NULL;
shmid=shmget(1234,10,IPC_CREAT|0666);
printf("%d",shmid);
if(user_cmd_t=(struct user_cmd_s*)shmat(shmid,NULL,0))
{
printf( " server address is : %p " ,user_cmd_t);
shm=user_cmd_t;
printf("\n %p",shm);
}
else
{
perror("shmat");
}
//shmdt(shm);
printf(" \n writing now to that address ");
user_cmd_t->a=91;
user_cmd_t->b=60;
printf(" the value at shared memory is : %d ", *(&(user_cmd_t->a)));
pause();
/*while(1)
{
}*/
return 0;
}
