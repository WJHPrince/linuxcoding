#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    char msg[] = "This is a test!\n";
    char msgget[100];
    int i = 0;
    FILE* fstream;
    fstream=fopen("demo.c","r");  // 打开
    if(fstream==NULL)
    {
        printf("Open file failed!\n");
        exit(1);
	}
    while ((msgget[i]=fgetc(fstream))!=EOF)
    {
        fputc((msgget[i]), stdout);
        i++;
    }
	fclose(fstream);
    return 0;
}
