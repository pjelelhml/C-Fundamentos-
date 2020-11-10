// Bibliotecas
#include <iostream>
using namespace std;

// Inicio da função principal
int main()
{

    int x = 5; // stack - faster

    // new => malloc() + construct
    int *y = new int(10); // heap 4 bytes
    cout << *y * x << endl;
    delete y; //  => free() + destructor

    int *w = new int[100];
    w[49] = 123;
    cout << w[49] << endl;
    delete[] w; // desalocar

    return 0;
} // fim da função principal