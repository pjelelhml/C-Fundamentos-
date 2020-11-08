#include <iostream>
using namespace std;

int main()
{

    double pi = 3.14;
    double &piRef = pi;

    cout << piRef << endl;
    cout << &piRef << endl;

    cout << *&piRef << endl;

    return 0;
}