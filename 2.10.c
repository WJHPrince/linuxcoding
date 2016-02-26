#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	FILE *p = fopen("demo.c","r");
	if(p == NULL)
		exit(1);
	char c;
	while( (c = fgetc(p)) != EOF )
	{
		fputc(c,stdout);
	}
	fclose(p);
	exit(0);
}
