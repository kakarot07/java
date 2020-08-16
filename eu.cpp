#include <stdio.h>

// Iterative function to calculate gcd of two numbers
// using Euclid’s Algorithm (basic version)
int euclid(int a, int b)
{
	// do until the two numbers become equal
	while (a != b)
	{
		// replace larger number by its difference with the smaller number
		if (a > b)
		   a = a - b;
		else
		   b = b - a;
	}

	return a;		// or b (since both are equal)
}

// main function
int main()
{
	int a = 20;
	int b = 12;

	printf("euclid(%d, %d) = %d", a, b, euclid(a, b));

	return 0;
}
