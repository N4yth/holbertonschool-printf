#include "main.h"

/**
 * power - do the a to the power b
 *
 * @a: the powered number
 * @b: the power
 *
 * Return: the result of the power
 */

int long power(int a, int b)
{
	int long result = 1;

	while (b) /* irate b while is not equal to 0 */
	{
		result *= a;
		b--;
	}
	return (result);
}
