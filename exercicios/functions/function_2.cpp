// Libraries
#include <iostream>
using namespace std;

// Function prototype
void log(int, bool = true);

// Function main
int main()
{
    log(3, false);
    log(4, false);
    log(5, false);

    return 0;
} // End function main

// Function implemention
void log(int number, bool newLine)
{
    cout << "Number: " << number;
    newLine ? cout << endl : cout << " ";
}