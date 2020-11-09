// Bibliotecas
#include <iostream>
using namespace std;

// Inicio da função principal
int main()
{

    string abc = "abcdefghijklmnopqrstuvwxyz";

    cout << abc[9] << endl;

    for (auto l : abc)
    {
        cout << l << ",";
    }
    cout << endl;

    return 0;
} // fim da função principal
