// Bibliotecas
#include <iostream>
#include <vector>
using namespace std;

vector<int> map(vector<int> v, int (*fn)(int))
{
    vector<int> newVector;
    for (auto el : v)
    {
        newVector.push_back((*fn)(el));
    }
    return newVector;
}

// Inicio da função principal
int main()
{

    auto square = [](int x) { return x * x; };
    auto triple = [](int x) { return x * x * x; };

    vector<int> nums = {2, 4, 8, 23, 56};
    vector<int> squares = map(nums, square);
    vector<int> triples = map(nums, triple);

    for (auto sq : squares)
    {
        cout << sq << " ";
    }
    cout << endl;
    for (auto sq : triples)
    {
        cout << sq << " ";
    }

    cout << square(3);

    return 0;
} // fim da função principal