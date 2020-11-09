#include <iostream>
using namespace std;

// Funções

void sayHello()
{
    cout << "Hello!\n";
}

void sayHelloTo(string name)
{
    cout << "Hello " << name << "!" << endl;
}

string returnHi()
{
    return "Hi!\n";
}

string returnHiTo(string name)
{
    return "Hi " + name + "!";
}

// Declaração da main
int main()
{

    sayHello();
    sayHelloTo("Hanna");
    string result = returnHi();
    cout << result;
    cout << returnHiTo("Hanna") << endl;

    return 0;
}
// Fim da função principal