#include<stdio.h>
#include<string.h>
int main()
{
char a[40];
char *p;
p=a;
fgets(a,40,stdin);
printf("\n this: %s\n ",a);
printf(" Now, parsing \n ");
while(*p!='\0')
{
printf(" \n next argument : \n");
while((*p!=' ')&&(*p!='\0'))
{
printf("%c \n",*p);
p++;
}
p++;
}
return 0;
}
