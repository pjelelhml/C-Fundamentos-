#include <iostream>
using namespace std;

int main()
{

    int *p1;
    int *p2 = nullptr;

    int x = 5;
    int y = 10;

    p1 = &x;

    cout << p1 << endl;
    cout << *p1 << endl;

    p1 = &y;
    cout << *p1 << endl;

    return 0;
}