#include "lists.h"
/**
 * myStartupFun - prints a message before the main function is executed
 */

void __attribute__ ((constructor)) myStartupFun()

{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
