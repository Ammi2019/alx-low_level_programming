#include "main.h"
/**
 * _isalpha - check for alpbet
 *Return 1 or 0
 */

int _isalpha(int c)

{
	if ((c >= 65 && c <= 90) || (c >= 95 && c <= 122))
	{
	return (1);
	}
	return (0);
}
