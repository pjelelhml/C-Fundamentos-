
#define SQUARE(X) X *X
#define ZERO 0
#include <iostream>
using namespace std;

int main()
{

    cout << SQUARE(10) << endl;
    cout << SQUARE(1 + 2) << endl;
    return ZERO;
}