#include <errno.h>
#include <seccomp.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    scmp_filter_ctx ctx = NULL;
    int pid;

    ctx = seccomp_init(SCMP_ACT_KILL_PROCESS);

    if (ctx == NULL) {
	return ENOMEM;
    }

    pid = fork();

    seccomp_release(ctx);
}
