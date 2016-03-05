#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
int main(int argc, char *argv[])
{
	int id = open("test.c", O_CREAT|O_RDWR|O_APPEND,S_IRUSR|S_IWUSR);
	char str[] = "#include <stdio.h>\nint main()\n{\n    return 0;\n}";
	write(id, str, sizeof(str)-1);
	close(id);
	return 0;
}
