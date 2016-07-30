#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
int main(int argc, char *argv[])
{
	int id = open("getopt.c",O_RDWR);
	write(id,"wojiushizuishuaide",20);
	int resourge = close(id);
	if(resourge == -1)
		printf("error!!!\n");
	exit(0);
}
