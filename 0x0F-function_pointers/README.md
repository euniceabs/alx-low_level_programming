C- 0x0F-function_pointers (Mandatory tasks)

TASK 0
Filename: 0-print_name.c - This function that prints a name with its prototype void print_name(char *name, void (*f)(char *))

TASK 1
Filename: 1-array_iterator.c - This function that executes a function given as a parameter on each element of an array. Prototype: void array_iterator(int *array, size_t size, void (*action)(int))

TASK 2
Filename: 2-int_index.c - This function that searches for an integer. Prototype: int int_index(int *array, int size, int (*cmp)(int))

TASK 3
3-main.c - This performs simple operations passed in as parameters.
Header files for 3-main.c - 3-main.c, 3-op_functions.c, 3-get_op_func.c, 3-calc.h

3-op_functions.c - This is made up of the following 5 functions below;

int op_add(int a, int b) - returns the sum of a and b.
int op_sub(int a, int b) - returns the difference of a and b.
int op_mul(int a, int b) - returns the product of a and b.
int op_div(int a, int b) - returns the result of the division of a by b.
int op_mod(int a, int b) - returns the remainder of the division of a by b.

3-get_op_func.c -this function selects the correct function from 3-op_functions.c to perform the operation asked by the user.

ADAVANCED TASK
100-main_opcodes.c - prints the opcodes of its own main function.