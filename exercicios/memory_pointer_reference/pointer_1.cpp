#include <iostream>
using namespace std;

int main()
{

    int value = 98766;
    int &ref = value;
    int *pot = &value;

    cout << value << "\t" << &ref << "\t" << pot << endl;

    return 0;
}