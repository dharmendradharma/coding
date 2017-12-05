#include<stdio.h>
#include<pthread.h>
int thread_func();
int main()
{
pthread_t t1;
int *res;
printf (" In the main");
pthread_create(&t1,NULL,thread_func,"bla");
pthread_join(t1,NULL);
printf( " back in the main ");
}
