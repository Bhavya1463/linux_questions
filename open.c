#include<stdio.h>
#include<fcntl.h>

int main()
{
    int fd1,fd2,fd3,fd4;


    fd2 = open("main1.txt",O_CREAT | O_RDWR,777);
    fd3 = open("/home/bhavya/Desktop/07032022/main1.c",O_RDWR,777);
    fd4 = creat("main1.txt",777);


    printf("FD2 returned is %d",fd2);
    printf("FD3 returned is %d",fd3);
    printf("FD4 returned is %d",fd4);


    close(fd2);
    close(fd3);
    close(fd4);

}