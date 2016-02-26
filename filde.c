#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
int main(int argc, char *argv[])
{
	int id0 = open("name",O_CREAT|O_RDWR,S_IRUSR|S_IWUSR|S_IXUSR);
	char str[1024];
	read(0,str,1024);
	write(id0,str,1024);
	int te0 = close(id0);
	if(te0 == -1 )
		exit(1);	
	exit(0);
}
