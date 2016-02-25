#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(int argc, char const *argv[])
{
        // 判断输入
        if(argc < 2 || argc > 2)
        {
            fprintf(stderr, "input error!\n");
            exit(1);
        }

        // 传输内容
        char TALK[128];
        FILE *Recever = fopen(argv[1], "w");
        if(!Recever)
        {
            fprintf(stderr, "sorry,try again\n");
            exit(2);
        }
        fprintf(stdout, "what the fuck?\n");
        fscanf(stdin, "%s", TALK);
        fprintf(Recever, "%s\n", TALK);
        fclose(Recever);
        exit(0);
}
