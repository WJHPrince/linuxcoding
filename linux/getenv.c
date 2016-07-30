#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void hello()
{

}
int main(int argc, char *argv[])
{
	char* value;
	if(argc == 1 || argc > 3)
	{
		printf("input error!\n");
		exit(1);
	}
	value = getenv(argv[1]);
	if(value)
		fprintf(stdout,"%s has value %s\n", argv[1], value);
	else 
	{
		fprintf(stdout, "%s has no value\n", argv[1]);
		if(!argv[2])
			exit(0);
		char *value;
		value = malloc(strlen(argv[2])+2+strlen(argv[1])); //这里用strlen不是很科学，，，只是值相同。。。标准点应该是sizeof
		strcpy(value,argv[2]);
		strcat(value,"=");
		strcat(value,argv[2]);
		putenv(value);
		free(value);
		fprintf(stdout,"%s has new value %s\n", argv[1], argv[2]);
	}
	exit(0);
}
