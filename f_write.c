#include<stdio.h>
int main()
{
FILE *fp;
fp=fopen("demo.txt","ab+");
int n;
struct apple_s
{
int weight;
char color;
}apple_t;
apple_t.weight=10;
apple_t.color='R';
n=fwrite(&apple_t,sizeof(struct apple_s),1,fp);
printf("%d",n);
return 0;
}
