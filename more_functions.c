#include "my_shell.h"

/**
 * sig_handler - action for SIGINT change
 * @sig: value for SIGINT
 *
 */

void sig_handler (int sig)
{
	if (sig == SIGINT)
	write(STDOUT_FILENO, "\n($) ", 5);
}
