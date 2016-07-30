#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int fid1 = open("hello.c", O_RDONLY);
	int fid2 = open("hello2.c", O_CREAT|O_WRONLY, S_IRUSR|S_IWUSR);
	char buffer[1024];
	int nread;

	while((nread = read(fid1, buffer, 1024)) > 0){
		write(fid2, buffer ,nread);
	}
	close(fid1);
	close(fid2);
	exit(0);
}
