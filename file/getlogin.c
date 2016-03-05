#include <sys/types.h>
#include <pwd.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main()
{
	uid_t uid;
	gid_t gid;

	struct passwd *pw;
	uid = getuid();
	gid = getgid();
	pw = getpwuid(uid);
	printf("%s\n", pw->pw_name);
	return 0;
}
