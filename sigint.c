#include "main.h"

/**
 * get_sigint - Handle the crtl + c call in prompt
 * @sig: Signal handler
 */

void get_sigint(__attribute__((unused))int sig)
{
	write(STDOUT_FILENO, "\n", 2);
	exit(1);
}
