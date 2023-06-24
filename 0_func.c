#include "main.h"
/**
 * c_case - detects the formater c
 * @args: the value should be printed
 * Return: 1
 */
int c_case(va_list args)
{
	char c = va_arg(args, int);

	write(1, &c, 1);
	return (1);
}
/**
 * s_case - detects the formater s
 * @args: the value should be printed
 * Return: 1
*/
int s_case(va_list args)
{
	char *str = va_arg(args, char *);
	int count = 0;

	if (!str)
		str = "(null)";
	while (str[count])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (count);
}
/**
 * p_case - detects the formater p
 * @args: the value should be printed
 * Return: 1
*/
int p_case(va_list args)
{
	(void)args;
	char c = '%';

	write(1, &c, 1);
	return (1);
}
/**
 * d_i_case - detects the formater d
 * @args: the value should be printed
 * Return: count of the number of digits
*/
int d_i_case(va_list args)
{
	int num = va_arg(args, int);
	int count = 0;

	if (num < 0)
	{
		write(1, "-", 1);
		num = -num;
		count++;
	}
	if (num / 10)
		count += d_case(num / 10);
	count += handle_default((num % 10) + '0');
	return (count);
}