#include <stdio.h>
#include <pwd.h>
int main(void)
{
	struct passwd *user;
	user = getpwnam("lab221");
	printf("name:%s\n", user->pw_name);
	printf("uid:%d\n", user->pw_uid);
	printf("home:%s\n", user->pw_dir);
	return 0;
}
