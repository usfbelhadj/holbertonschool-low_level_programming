#include <stdio.h>
/**
 * beFore- Functions that are executed before main
 *
 */
void beFore(void) __attribute__ ((constructor));
void beFore(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
