#include<sys/types.h>
#include<sys/shm.h>
#include<sys/ipc.h>
#include<stdio.h>
struct user
{
int a;
int b;
};
int main()
{
struct user *user_t;
int shmid=0;
int *shm=NULL;
shmid=shmget(1234,10,0666);
printf("%d",shmid);
if(user_t=(struct user *)shmat(shmid,NULL,0))
{
printf( "\n client address is :%p ",user_t); 
shm=user_t;
printf("\n %p",shm);
}
else
{
perror("shmat");
}
printf(" \n reading from that address ");
//*shm=12;
printf("\n the value at shared memory is : %d ",*(&(user_t->a)));
return 0;
}

