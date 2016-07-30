#include <stdio.h>
#include <stdlib.h>
extern char **environ;
int main()
{
	char **tmp = environ;
	while(*tmp)
	{
		fprintf(stdout,"%s\n", *tmp);
		tmp++;
	}
	return 0;
}

