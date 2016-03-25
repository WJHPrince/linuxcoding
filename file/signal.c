/*
**写的第一个信号程序，递归调用，让ctrl-c死掉
*/
#include <unistd.h>
#include <stdio.h>
#include <signal.h>
void keep_try(int sig){
        printf("heiheihei\n");
        (void)signal(SIGINT,keep_try);
}
int main()
{
        (void)signal(SIGINT, keep_try);
        while(1)
        {
                printf("hello,world!\n");
                sleep(2);
        }
}
