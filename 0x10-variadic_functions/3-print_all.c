#include "variadic_functions.h"

/**
 *print_all - A function that prints anything
 *@format: A list of types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
	int i;
	char *tmp, *sep = "";
	va_list list;

	va_start(list, format);
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%s%c", sep, va_arg(list, int));
			break;
		case 'i':
			printf("%s%d", sep, va_arg(list, int));
			break;
		case 'f':
			printf("%s%f", sep, va_arg(list, double));
			break;
		case 's':
		{
			tmp = va_arg(list, char *);
			if (tmp == NULL)
				tmp = "(nil)";
			printf("%s%s", sep, tmp);
			break;
		}
		default:
			i++;
			continue;
		}
		sep = ", ";
		i++;
	}
	va_end(list);
	printf("\n");
}
