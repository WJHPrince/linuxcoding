#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	FILE *p = fopen("demo.c","r");
	int ntimes;
	fread(stdout,1024,ntimes,p);
	fclose(p);	
	exit(0);
}
