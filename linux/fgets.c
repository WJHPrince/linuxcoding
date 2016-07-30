#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	FILE *p = fopen(argv[1],"rb");
	char str[1024];
	while(fgets(str,1024,p))
		fprintf(stdout,"%s",str);
	exit(0);
}
