#include <stdio.h>
#include <stdlib.h>

int main ( int argc, char** argv )
{
	long long x_0 = 1;
	long long y_0 = 0;
	if (argc < 2)
	{
		printf("Please supply N to find hte nth Pell's EQ solution for x^2 - 2y^2\n");
		return 1;
	}

	long n = atoi(argv[1]);
	long long x, y;
	while(n > 0)
	{
		y = y_0 + 2*(y_0 + x_0);
		x = y + (y_0 + x_0);
		y_0 = y;
		x_0 = x;
		n--;
	}

	printf("Solution: (%lld,%lld)\n", x, y);

	return 0;
}
