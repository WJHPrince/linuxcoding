#include <unistd.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int opt;
	struct app da;
	while((opt = getopt(argc,argv,"dfph:")) != -1)
	{
		switch(opt)
		{
			case 'd' :
			case 'f' :
			case 'p' :
				printf("option %c\n", opt);
				break;
			case 'h' :
				printf("filename:%s\n", optarg);
				break;
			case '?' :
				printf("i dont know!\n");
				break;
			default :
				printf("fvdfvd\n");
				break;
		}
		printf("%d\n", optind);
	}
	return 0;
}
