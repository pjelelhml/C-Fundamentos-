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

    cout << "\nForeach #01...\n";

    for (string s : names)
    {
        cout << s << " ";
    }

    cout << "\nForeach #02...\n";
    for (auto &s : names)
    {
        s.append("!!!!!!!!");
        cout << s << " ";
    }

    cout << "\nForeach #03 (REF CONST)...\n";
    for (auto const &s : names)
    {
        // s.append("!!!!!!!!");
        cout << s << " ";
    }

    cout << endl;
    cout << names[0] << endl;

    return 0;
} // fim da função principal