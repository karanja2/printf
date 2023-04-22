#include "main.h"

/**
 * get_size - used to calculate the size in bytes that
 * a data type occupies
 * @format: formatted string in which arguments are printed
 * @f: list of arguments
 * Return: precision
 */
int get_size(const char *format, int *f)
{
	int curr_f = *f + 1;
	int size = 0;

	if (format[curr_f] == 'l')
		size = S_LONG;
	else if (format[curr_f] == 'h')
		size = S_SHORT;

	if (size == 0)
		*f = curr_f - 1;
	else
		*f = curr_f;
	return (size);
}
