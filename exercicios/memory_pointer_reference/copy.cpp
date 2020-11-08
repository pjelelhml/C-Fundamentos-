#include <iostream>
using namespace std;

int main()
{

    int a = 2;
    int b = a; // assignment copies the value
    int c;

    a++;
    b--;

    cout << a << " " << b;

    return 0;
}