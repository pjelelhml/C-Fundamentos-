#include <iostream>
using namespace std;

int main()
{

    int arr[] = {47,
                 33,
                 72,
                 13,
                 88};

    int *p1 = &arr[0];
    cout << *p1 << endl;

    // ponteiro pula 4 bytes para o próximo valor do array
    // aritmética de ponteiros
    p1++;
    cout << *p1 << endl;

    cout << "....." << endl;
    cout << *p1 << endl;

    return 0;
}