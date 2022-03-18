#include <stdio.h>

void no_main_yet(void) __attribute__ ((constructor));
/**
 * no_main_yet - Executes functions before main
 * Constructor Attribute allows the function to run before main
 * Passing function no_main_yet as an atribute to the constructor.
 * Whereas the Deconstructor attribute pushes the executions after main.
 */
void no_main_yet(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
