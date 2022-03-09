#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd1,fd2,fd3,len;
    char write_buffer[50]="System calls";
    char read_buffer[50];
    fd1 = open("linux1.txt",O_CREAT|O_RDWR,777);
    if(fd1<0)
    {
        printf("\nFile not created\n");
    }
    printf("FD1: %d\n",fd1);

    len = write(fd1,write_buffer,50);
    printf("\nReturned value : %d\n",len);
    

    lseek(fd1,4,SEEK_SET);
    read(fd1,read_buffer,len);
    printf("\ndata: %s\n",read_buffer);
    close(fd1);

    return 0;

}