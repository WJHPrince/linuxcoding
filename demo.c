#include <stdio.h>
int main(int argc, char *argv[])
{
	int arg;
	for (arg = 0; arg < argc; arg++)
	{
		if(argv[arg][0] == '-')
			printf("option %s \n",argv[arg]+1);
		else
			printf("option %s argument\n", argv[arg]);
	}
	printf("%d\n",argc);
	return 0;
}