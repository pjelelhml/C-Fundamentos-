// Bibliotecas
#include <iostream>
using namespace std;

// Classe Actor
class Actor
{
public:
    string name;
    string email;

    Actor(string name = "Anonymous", string email = "-")
        : name(name), email(email) {}

    string toString()
    {
        return name + " [" + email + "]";
    }
};

// Inicio da função principal
int main()
{
    Actor actor1;
    Actor actor2("Steve", "steve@email.com");

    cout << actor1.toString() << endl;
    cout << actor2.toString() << endl;

    return 0;
} // fim da função principal