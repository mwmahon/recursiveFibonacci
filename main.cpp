

/**
 *  mike mahon
 *  recursiveFibonacci.cpp
 *  c++ program to calculate the nth Fibonacci number recursively
 */


/**< preprocessor directives */
#include <iostream>
using namespace std;


/**< variable declarations */
long long int counter = 0;


/**< function prototypes */
long long int fibonacci(long long int x);


/**< main() function */
int main(void)
{
	/**< variable declarations */
	long long int n, result;

	cout << "Recursive Fibonacci Calculator" << endl;
	cout << "Calculates F(n) given n\n" << endl;

	/**< read in a value for n*/
	do
	{
		cout << "Enter a positive value for n: ";
		cin >> n;
	}
	while (n <= 0);

	/**< calculate n! and display result */
	result = fibonacci(n);
	cout << "\nF(" << n << ") = " << result << endl;
	cout << counter << " function calls" << endl;

	return 0;
}


/**< fibonacci() function (recursive) */
long long int fibonacci(long long int x)
{
	counter++;

	if (x <= 2)
		return 1;
	else
		return (fibonacci(x - 1) + fibonacci(x - 2));
}
