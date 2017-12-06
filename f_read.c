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
n=fread(&apple_t,sizeof(struct apple_s),1,fp);
printf("%d",apple_t.weight);
printf("%c",apple_t.color);
printf("%d",n);
return 0;
}
