#include<stdio.h>
#include<unistd.h>

int main()
{
    printf("Max fds: %d",getdtablesize());
    exit(0);
}