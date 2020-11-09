#include <iostream>
using namespace std;

const double PI = 3.141592;
int g = 1;

void func3()
{
    int g = 0;
    g += 100;
    cout << "exec..." << endl;
}

void func2()
{
    g += 10;
    func3();
}

void func1()
{
    g += 1;
    func2();
}
// main function
int main()
{
    func1();

    cout << g << endl;
    return 0;
} // end main function