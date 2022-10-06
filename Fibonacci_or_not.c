#include <math.h>
#include <stdbool.h>
#include <stdio.h>

// A utility function that returns true if x is perfect
// square
bool isPerfectSquare(int x)
{
	int s = sqrt(x);
	return (s * s == x);
}

// Returns true if n is a Fibonacci Number, else false
bool isFibonacci(int n)
{
	// n is Fibonacci if one of 5*n*n + 4 or 5*n*n - 4 or
	// both is a perfect square
	return isPerfectSquare(5 * n * n + 4)
		|| isPerfectSquare(5 * n * n - 4);
}

// A utility function to test above functions
int main()
{
	int i;
	scanf("%d",&i);
	if (isFibonacci(i))
			printf("True");
	else
			printf("False");
	
	return 0;
}

// This code is contributed by Sania Kumari Gupta (kriSania804)
