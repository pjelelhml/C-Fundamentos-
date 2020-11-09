// Libraries
#include <iostream>
using namespace std;

// Functions
void incCopy(int value)
{
    value++;
}

void incRef(int &value)
{
    value++;
    value++;
    value++;
}
// Main function
int main()
{
    int x = 1;

    incCopy(x);
    cout << x << endl;

    incRef(x);
    cout << x << endl;

    return 0;
} // End main function