#include <stdio.h>

/**
 * myStartupFun - executed before main function
 * Description: this function is executed before the main function due to the
 * constructor attribute. It prints a message to the console.
 * Return: void
 */
void myStartupFun(void) __attribute__((constructor));

/**
 * myStartupFun - implementation of myStartupFun
 */
void myStartupFun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

