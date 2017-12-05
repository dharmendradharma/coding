#include<stdio.h>
#include<stdlib.h>
#include<inttypes.h>
// Vlan Flow

typedef struct
{
uint8_t port;
uint16_t vlan;
}vlan_flow;
// Injected flow

typedef struct
{
uint8_t mep_id;
uint16_t ethertype;
}injected_oam_flow;

typedef struct
{
uint8_t port;
uint16_t vlan;
}egress_vlan_flow;
// Union

typedef union
{
vlan_flow vlan_flow_buckets;
injected_oam_flow injected_oam_flow_buckets;
egress_vlan_flow egress_vlan_flow_buckets;
}rules_bucket;

typedef struct
{
rules_bucket *head;
int count;
}rules;
