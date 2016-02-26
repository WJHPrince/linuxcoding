#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int s;
	fscanf(stdin,"%d", &s);
	fprintf(stdout,"%d\n",s);
	exit(0);
}
