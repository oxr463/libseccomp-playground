#include <errno.h>
#include <seccomp.h>

int main(int argc, char *argv[])
{
    scmp_filter_ctx ctx = NULL;

    ctx = seccomp_init(SCMP_ACT_ALLOW);

    if (ctx == NULL) {
	return ENOMEM;
    }

    seccomp_release(ctx);
}
