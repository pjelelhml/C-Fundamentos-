// Bibliotecas
#include <iostream>
using namespace std;

// Inicio da função principal
int main()
{
    string names[] = {
        "Hanna",
        "Petter",
        "Mary",
        "Mike",
        "James"};

    for (int i = 0; i < 5; i++)
    {
        cout << names[i] << " ";
    }

    cout << "\nForeach...\n";

    for (string s : names)
    {
        cout << s << " ";
    }

    return 0;
} // fim da função principal