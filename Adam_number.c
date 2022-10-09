// CPP program to check Adam Number
#include <bits/stdc++.h>
using namespace std;

// To reverse Digits of numbers
int reverseDigits(int num)
{
	int rev = 0;
	while (num > 0)
	{
		rev = rev * 10 + num % 10;
		num /= 10;
	}
	return rev;
}

// To square number
int square(int num)
{
	return (num * num);
}

// To check Adam Number
bool checkAdamNumber(int num)
{
	// Square first number and square
	// reverse digits of second number
	int a = square(num);
	int b = square(reverseDigits(num));
	
	// If reverse of b equals a then given
	// number is Adam number
	if (a == reverseDigits(b))
	return true;
	return false;	
}

// Driver program to test above functions
int main()
{
	int num;
	scanf("%d",&num);
	
	if (checkAdamNumber(num))
	cout << "True";
	else
	cout << "False";
	
	return 0;
}