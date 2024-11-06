#include<sys/socket.h>
#include<netinet/in,h>
#include<string.h>
#include<stdio.h>
#include<arpa/inet.h>
#include<unistd.h>
int main(void){
    struct sockaddr_in server;
    int sock;
    char buf[]="UDF TEST";
    bzero(&server,sizeof(sserver));
    server.sin_family=PF_INET;
    server.sin_addr.s_addr=lnet_addr("127.0.0.1");
    server.s_in_port=htons(5678);
    sock=socket(PF_INET,SOCK_DGRAM,0)
    sendto(sock,buf,sizeof(buf),0,(struct sockaddr*)&server,sizepf(server));
    close(sock);
}