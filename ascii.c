#include <stdio.h>
int main(int argc, char *argv[])
{
	char name[] = "tangyunchao";
	int len = sizeof(name)/sizeof(char)-1;
	int i;
	int sum = 0;
	for(i = 0; i < len; i++){
		printf("%d  ", name[i]);
		sum+=(int)name[i];
	}
	putchar('\n');
	printf("%d\n", sum);
	return 0;
}
