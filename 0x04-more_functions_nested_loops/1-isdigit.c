#define "main.h"

/**
 * _isdigit - checks for upprcase character
 * @c: function parameter
 * Return: 1 on success 0 on failure
 */

int _isdigit(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);

}
