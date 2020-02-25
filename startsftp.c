#include <stddef.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <pwd.h>

#include "sftp.h"
#include "xmalloc.h"

int
sftp_main(int argc, char **argv)
{
	struct passwd *user_pw;

	ssh_malloc_init();	/* must be called before any mallocs */
	/* Ensure that fds 0, 1 and 2 are open or directed to /dev/null */
	//sanitise_stdfd();

	// if ((user_pw = getpwuid(getuid())) == NULL) {
	// 	fprintf(stderr, "No user found for uid %lu\n",
	// 	    (u_long)getuid());
	// 	return 1;
	// }

	return (sftp_server_main(argc, argv, user_pw));
}
