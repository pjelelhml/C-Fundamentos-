// libraries
#include <iostream>
using namespace std;

// functions
int factorial(int n)
{
    if (n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

// main function
int main()
{
    cout << factorial(4) << endl;
    cout << factorial(3) << endl;
    cout << factorial(2) << endl;
    return 0;
} // end main function