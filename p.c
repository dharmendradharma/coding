#include<stdio.h>
int main()
{
int a=10,*p;
p=&a;
printf("%d",a);
printf("\n %p",p);
printf("\n %d",*p);
++*p;
printf("\n %p",p);
printf("\n %d",*p);
return 0;
}
