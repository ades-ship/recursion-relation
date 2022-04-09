// C++ program to show Nested Recursion
#include <iostream>
using namespace std;

int factorial(int n)
{
	if (n == 1 || n==0)
		return 1;

	return n*factorial(n-1);
   
}

// Driver code
int main()
{
	int r,n;
    cin>>n;
	r = factorial(n);
    
	cout << " factorial is " << r;

	return 0;
}

// This code is contributed by shivanisinghss2110
