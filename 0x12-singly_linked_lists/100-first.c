#include <stdio.h>

/**
 * first - prints a sentence before the main func
 * the function is then executed.
 */

void first(void) __attribute__ ((constructor));

void first(void)
{
    printf("You're beat! and yet, you must allow,\n");
    printf("I bore my house upon my back!\n");
}
