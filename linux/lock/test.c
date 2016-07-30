#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>
int main(int argc, char *argv[])
{
	int errno_id;
	int file = open("demo", O_CREAT | O_EXCL | O_RDWR, 0777);
	errno_id = errno;
	printf("%d\n", errno_id);
	printf("%s\n", strerror(errno_id));
	write(file, "1111", 5);
	close(file);
	return 0;
}
