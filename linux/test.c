#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
	char p[100] = "wojiushi";
	char q[100] = "zuishuaide";
	strcat(p,q);
	printf("%s\n",q);
	return 0;
}
