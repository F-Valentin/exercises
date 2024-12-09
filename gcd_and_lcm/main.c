#include <stdlib.h>

unsigned int pgcd(int a, int b)
{
	if (a == 0) return abs(b);
	if (b == 0) return abs(a);
	
	a = abs(a);
	b = abs(b);

	unsigned int result = a % b;
	while (result != 0)
	{
		a = b;
		b = result;
		result = a % b;
	}
	return (b);
}

unsigned int	ppcm(int a, int b)
{
	if (a == 0 || b == 0)
        return (0);
	
	a = abs(a);
	b = abs(b);
	return (a / pgcd(a, b)) * b; // better than return (a * b) / pgcd(a, b);
}