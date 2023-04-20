#include "variadic_functions.h"

/**
 * print_all - Print Numbers
 * @format: Seperator
 */

void print_all(const char * const format, ...)
{
	int i = 0, len = strlen(format);
	char *mystr, *mysep = "";
	va_list myaps;

	va_start(myaps, format);
	if (format != NULL)
	{
		while (i < len)
		{
			switch (format[i])
			{
			case 'c':
				printf("%s%c", mysep, va_arg(myaps, int));
				break;
			case 'i':
				printf("%s%d", mysep, va_arg(myaps, int));
				break;
			case 'f':
				printf("%s%f", mysep, va_arg(myaps, double));
				break;
			case 's':
				mystr = va_arg(myaps, char *);
				if (mystr == NULL)
				{
					mystr = "(nil)";
				}
				printf("%s%s", mysep, mystr);
				break;
			default:
				i++;
				continue;
			}
			mysep = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(myaps);
}
