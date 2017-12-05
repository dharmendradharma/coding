#include<stdio.h>
#include<stdlib.h>
struct st
{
int a;
struct st *next;
};
int IsStartingNode(struct st **);
void add_at_begin();
void add_at_end();
void write_to_file(struct st **);
void print();
struct st *head=NULL;
FILE *fp;
int main()
{
  int choice;
  while(1)
  {
    printf("1: Add the Node at Beginning\n");
    printf("2: Add the Node at Ending\n");
    printf("3: print\n");
    printf("4: exit\n");
    //printf("5:Write to File\n");
    printf("Enter Choice\n");
    scanf("%d",&choice);
           switch(choice)
            {
                case 1:
                add_at_begin();
                break;
                case 2:
                add_at_end();
                break;
                case 3:
                print();
                break;
                //case 5:
                //write_to_file();
                case 4:
                exit(0);
                           
                default:
                read_from_file(&head);
                printf("Bye!!\n");
            }
    }
}

   

int IsStartingNode(struct st **nu)
     {
             if(head==NULL)
   		{
  		head=*nu;
 		(*nu)->next=NULL;
 		return 0;
		}
     }


void add_at_begin()
{
   struct st *nu=(struct st*)malloc(sizeof(struct st));
   printf("Enter data to the node\n");
   scanf("%d",&nu->a);
    if((IsStartingNode(&nu)==0));
    else
    {
   nu->next=head;
   head=nu;
    }
 write_to_file(&nu);
}


void add_at_end()
{
   struct st *temp=head,*nu=malloc(sizeof(struct st));
   printf("Enter data to the node\n");
   scanf("%d",&nu->a);
    if((IsStartingNode(&nu)==0));
    else
     {
        while(temp->next)
        {
         temp=temp->next;
         }
temp->next=nu;
nu->next=NULL;
 //write_to_file();
     }
}


void print()
{
struct st *ptr;
ptr=head;
while(ptr)
{
printf("data : %d\n",ptr->a);
ptr=ptr->next;
}
}

void write_to_file(struct st **temp1)
{
fp=fopen("test.txt","wb+");
fwrite(&temp1,sizeof(struct st),1,fp);

}


void read_from_file(struct st **temp1)
{
  rewind(fp);
  fread(&temp1,sizeof(struct st),1,fp);
  printf("%d",(*temp1)->a);


}

/*
Original File

write_to_file()
{
FILE *fp=fopen("test.txt","r+");
struct st *temp=head;
struct st *st2=(struct st*)malloc(sizeof(struct st));
//while(temp->next)
//{
//fprintf(fp,"%d\n",temp->a);
//temp=temp->next;
//}
if(fwrite(temp,sizeof(struct st),1,fp))
printf("wrote\n");
//fclose(fp);
//fp=fopen("test.txt","r+");
rewind(fp);
fread(st2,sizeof(struct st),1,fp);
printf("%d\n",st2->a);
fclose(fp);

}


*/
