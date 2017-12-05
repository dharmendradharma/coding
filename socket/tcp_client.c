#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<arpa/inet.h>
#include<sys/socket.h>
#define LOCAL_PORT 5000
#define LOOP_BACK_IP_1 127001
void main()
{
printf(" \t \t \n TCP CLIENT START \n");
int socket_id,temp_sock;
struct sockaddr_in tcp_server_addr,tcp_client_addr;
socklen_t client_addr_length=sizeof(tcp_client_addr);
memset(&tcp_server_addr,0,sizeof(tcp_server_addr));
tcp_server_addr.sin_family=AF_INET;
tcp_server_addr.sin_port=htons(LOCAL_PORT);
tcp_server_addr.sin_addr.s_addr=htonl(LOOP_BACK_IP_1);
/*######################################################## */
if((socket_id=socket(PF_INET,SOCK_STREAM,0))<0)
	perror("Failed to initialize the Server Socket");
if(connect(socket_id,(struct sockaddr *)&tcp_server_addr,sizeof(tcp_server_addr))==-1)
	perror(" Failed to connect to the Server Socket to the port : LOCAL_PORT ");
/*if(listen(socket_id,5)<0)
	perror(" Failed to listen for 5 connections");
while(1)
{
if((temp_sock=accept(socket_id,(struct sockaddr *)&tcp_client_addr,&client_addr_length))<0)
	perror(" Failed to accpet a connection ");
}*/
/*######################################################## */
while(1);
if(close(socket_id)!=0)
	perror("Failed to close the socket");
}
