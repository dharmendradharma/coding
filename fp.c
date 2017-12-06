#include<stdio.h>
#include "hash_header.h"
rules *rules_table=NULL;
rules_bucket* get_new_node()
{
rules_bucket *temp=(rules_bucket*)malloc(sizeof(rules_bucket));
return temp;
}
void add_vlan()
{
printf("\n Populating vlan flow table");
if(!rules_table[0].head)
{
rules_table[0].head=get_new_node();
rules_table[0].head->vlan_flow_buckets.port=10;
rules_table[0].head->vlan_flow_buckets.vlan=10;
}
}
void add_injected()
{
printf("\n Populating injected flow table");
if(!rules_table[1].head)
{
rules_table[1].head=get_new_node();
rules_table[1].head->injected_oam_flow_buckets.mep_id=20;
rules_table[1].head->injected_oam_flow_buckets.ethertype=20;
}
}
void add_egress()
{
printf("\n func c");
}
void d()
{
printf("\n Done");
}
void print(void (*func_pointers[])(void))
{
printf("\n In the printing function " );
printf("\n Printing VLAN table");
printf("\n the vlan flow table port : %d ",rules_table[0].head->vlan_flow_buckets.port);
printf("\n the vlan flow table vlan : %d ",rules_table[0].head->vlan_flow_buckets.vlan);
printf("\n the injected oam flow mep id : %d ",rules_table[1].head->injected_oam_flow_buckets.mep_id);
printf("\n the injected oam flow ether type : %d ",rules_table[1].head->injected_oam_flow_buckets.ethertype);
}
int main()
{
int i;
rules_table=calloc(4,sizeof(rules));
void (*func_pointers[4])(void);
func_pointers[0]=&add_vlan;
func_pointers[1]=&add_injected;
func_pointers[2]=&add_egress;
func_pointers[3]=&d;
for(i=0;i<=3;i++)
{
(*func_pointers[i])();
}
print(func_pointers);
return 0;
}
