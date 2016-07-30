#include <stdio.h>
int main(int argc, char *argv[])
{
	FILE *in = fopen("/dev/tty", "r");
	FILE *temp = fopen("test", "w");
	char str[1024];
	fgets(str, 1024, in);
	fputs(str,temp);
	fclose(in);
	fclose(temp);
	return 0;
}
