#include "main.h"
/**
*case_c - handle character printing
*@i:chracter ASCII code
*Return: An Int
*/
int case_c(int i)
{
	int len = 0;

	putchar(i);
	len++;

	return (len);

}

/**
*case_c - handle base 10 digit printing
*@i:Digit to print
*Return: An Integer
*/


int case_d(int i)
{
	char *digits;
	int len = 0;

	if (i < 0)
	{
		i = -i;
		putchar('-');
	}
	digits = base_convert(i, 10);
	while (digits)
	{
		len++;
	}
	puts(digits);
	return (len);
}
/**
*case_i - handle integer printing
*@i:Integer to print
*Return: An Int
*/

int case_i(int i)
{
	char *digits;
	int len = 0;

	if (i < 0)
	{
		i = -i;
		putchar('-');
	}
	digits = base_convert(i, 10);
	while (digits)
	{
		len++;
	}
	puts(digits);
	return (len);
}

/**
*case_c - handle String printing
*@s: pointer to chararacters
*Return: An Int
*/

int case_s(char *s)
{
	int len = 0;

	while(s)
		len++;

	puts(s);
	return (len);
}
/**
*case_x - Hexadeximal case
*@i: input data
*Return: An int
*/
int case_x(u_int i)
{
	char *digits;
	int len = 0;

	digits = base_convert(i, 16);
	while (digits)
	{
		len++;
	}
	puts(digits);
	return (len);
}
/**
*case_o - Octal base case
*@i: input data
*@Return: An Int
*/

int case_o(u_int i)
{
	char *digits;
	int len = 0;

	digits = base_convert(i, 10);
	while (digits)
	{
		len++;
	}
	puts(digits);
	return (len);
}
