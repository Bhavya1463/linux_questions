#include<stdio.h>
#include<unistd.h>
#include <fcntl.h>


int main()
{
    struct stat st;

    int fd;
    fd = open("maxfds.c",O_RDONLY,777);
    fstat(fd,&st);
    //stat("maxfds.c",&st);
    printf("File size: %lu\n",st.st_size);
    printf("INode : %lu\n",st.st_ino);

    return 0;
}