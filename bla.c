#include<stdio.h>
#include "freeflow_globals.h"
#include<stdlib.h>
int main()
{
struct user_input_s *user_input_t;
user_input_t=(struct user_input_s *)malloc(sizeof(struct user_input_s));
int arg_counter=0,i=1,j=0;
char user_input_string[40],*user_input_array_pointer;
user_input_array_pointer=user_input_string;
printf(" The array address is : %p ", user_input_string);
while(1)
{
printf(" FreeFlow: > ");
fgets(user_input_string,sizeof(user_input_string),stdin);
user_input_array_pointer=user_input_string;
arg_counter=0;
printf(" The array address is : %p ", user_input_array_pointer);
while(*user_input_array_pointer!='\0'&&(*user_input_array_pointer!='\r'))
{
j=0;
arg_counter++;
while((*user_input_array_pointer!=' ')&&(*user_input_array_pointer!='\0')&&(*user_input_array_pointer!='\r'))
{
if(arg_counter==1)
user_input_t->argument_1[j]=*user_input_array_pointer;
printf( "\n reading %c to the address of : %p ",*user_input_array_pointer,&(user_input_t->argument_1[j]));
if(arg_counter==2)
user_input_t->argument_2[j]=*user_input_array_pointer;
if(arg_counter==3)
user_input_t->argument_3[j]=*user_input_array_pointer;
j++;
user_input_array_pointer++;
}
i++;
user_input_array_pointer++;
}
printf("\n The first argument is : %s ",user_input_t->argument_1);
printf("\n The second argument is : %s ",user_input_t->argument_2);
printf("\n The third argument is : %s ",user_input_t->argument_3);
}

}
