#include "main.h"

/**reverse_array - reverse the content of an array
 * @a: takes array
 * @n: number of elemants in the array
 * Return: void
*/

void reverse_array(int *a, int n)
{
	int i, k, m;

	for (i = 0, k = (n - 1); i < k; i++, k--)
	{
		m = a[i];
		a[i] = a[k];
		a[k] = m;
	}
}
