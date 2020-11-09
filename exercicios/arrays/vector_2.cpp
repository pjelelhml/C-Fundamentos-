// Bibliotecas
#include <iostream>
#include <vector>
using namespace std;

// Inicio da função principal
int main()
{
    vector<int> nums;
    nums.assign(10, 1);

    nums[0] = 7;
    nums[9] = 7;

    nums.erase(nums.begin() + 4);

    for (auto n : nums)
    {
        cout << n << " ";
    }

    nums.clear();

    cout << "\n"
         << nums.size() << endl;
    return 0;
} // fim da função principal