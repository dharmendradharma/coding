#include<stdio.h>
void a()
{
printf("\n func a");
}
void b()
{
printf("\n func b");
}
void c()
{
printf("\n func c");
}
void d()
{
printf("\n func d");
}
int main()
{
int i;
void (*func_pointers[4])(void);
func_pointers[0]=&a;
func_pointers[1]=&b;
func_pointers[2]=&c;
func_pointers[3]=&d;
for(i=0;i<=3;i++)
{
(*func_pointers[i])();
}
return 0;
}
