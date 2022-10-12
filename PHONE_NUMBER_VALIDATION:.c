// C++ program to check if given mobile number
// is valid.
#include <iostream>
#include <regex>
using namespace std;

bool isValid(string s)
{
	// The given argument to pattern()
	// is regular expression. With the help of
	// regular expression we can validate mobile
	// number.
	// 1) Begins with 0 or 91
	// 2) Then contains 6,7 or 8 or 9.
	// 3) Then contains 9 digits
const regex pattern("(0|91)?[6-9][0-9]{9}");

// regex_match() is used to
// to find match between given number
// and regular expression
if(regex_match(s, pattern))
{
	return true;
}
else
{
	return false;
}
}

// Driver Code
int main()
{
string s;
cin>>s;
if(isValid(s))
{
	cout << "Valid";
}
else
{
	cout<<"Invalid";
}
return 0;
}

// This code is contributed by yuvraj_chandra
