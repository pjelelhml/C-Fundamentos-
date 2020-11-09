// Bibliotecas
#include <iostream>
using namespace std;

// Funções
int add(int a, int b)
{
    return a + b + 10;
}

// namespace
namespace calc
{
    class Product
    {
    };

    int add(int a, int b)
    {
        return a + b + 20;
    }

    int subtract(int a, int b)
    {
        return a - b;
    }
} // namespace calc

// Inicio da função principal
int main()
{

    cout << add(10, 20) << endl;
    cout << calc::add(10, 20) << endl;

    return 0;
} // fim da função principal