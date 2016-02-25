#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[])
{
	char str1[] = "hello,world!\n";
	int str1len;
	str1len = strlen(str1);
	write(1,argv[1],strlen(argv[1]));
	exit(0);
}
