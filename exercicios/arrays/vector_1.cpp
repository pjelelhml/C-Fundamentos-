// Bibliotecas
#include <iostream>
#include <vector>
using namespace std;

// Inicio da função principal
int main()
{
    vector<int> nums = {1, 2, 3};

    nums.push_back(4);
    nums.push_back(5);
    nums.push_back(6);
    nums.push_back(7);
    nums.push_back(8);

    for (int n : nums)
    {
        cout << n << " ";
    }

    cout << "\n";
    // crbegin crend -- rbegin rend -- etc
    for (auto i = nums.begin(); i != nums.end(); i++)
    {
        cout << *i << endl;
    }

    return 0;
} // fim da função principal