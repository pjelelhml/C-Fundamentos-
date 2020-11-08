#include <iostream>
using namespace std;

int main()
{

    string greeting = "Hi!";
    string &ref = greeting;

    cout << greeting << "\t" << ref << endl;

    string name = "Peter";
    ref = name;
    cout << greeting;

    return 0;
}