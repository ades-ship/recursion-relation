/*
#include <iostream>
using namespace std;

int fibonacci(int n)
{
	if (n == 1 || n==0)
		return n;

	return fibonacci(n-1)+fibonacci(n-2);
   
}

// Driver code
int main()
{
	int r,n;
    cin>>n;
	r = fibonacci(n);
    
	cout << " fibonacci serie sum is " << r;

	return 0;
}*/


#include <iostream>
using namespace std;

int fibonacci(int n)
{  
	int a=0,b=1,c;
	if (n == 1 || n==0)
		return n;
    for(int i=2; i<n ; i++)
	{
       c=a+b;
	   a=b; 
	   b=c;
	}
  return c;
}

// Driver code
int main()
{
	int r,n;
    cin>>n;
	r = fibonacci(n);
    
	cout << " fibonacci serie sum is " << r;

	return 0;
}