#include "variadic_functions.h"

/**
 * print_all - prints everything
 * @format: list of types args passed to the function
 */

void print_all(const char * const format, ...)
{
	int n = 0;
		char *str, *sepa = "";
		va_list list;

		va_start(list, format);
		if (format)
		{
			while (format[n])
			{
				switch (format[n])
				{
					case 'c':
						printf("%s %c", sepa, va_arg(list, int));
						break;
					case 'i':
						printf("%s %d", sepa, va_arg(list, int));
						break;
					case 'f':
						printf("%s %f", sepa, va_arg(list, double));
						break;
					case 's':
						str = va_arg(list, char *);
						if (!str)
							str = "(nil)";
						printf("%s %s", sepa, str);
						break;
					default:
						n++;
						continue;
				}
				sepa = ", ";
				n++;
			}
		}
		printf("\n");
		va_end(list);
}

