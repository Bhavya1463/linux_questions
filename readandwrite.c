#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>


int main()
{
    int fd1,fd2,fd3,len;
    int x;
    char write_buffer[50]="Linux internal tools";
    fd2 = open("linux1.txt",O_CREAT | O_RDWR,777);
    printf("fd2= %d",fd2);

    if(fd2<0)
    {
        printf("File not created");
    }

    read(fd2,write_buffer,50);





    return 0;

    
}