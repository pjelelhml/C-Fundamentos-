// Bibliotecas
#include <iostream>
using namespace std;

// Classe Actor
class Actor
{
public:
    string name;
    string email;

    Actor() : Actor("Anonymous") {}

    Actor(string name, string email = "-")
    {
        // (*this).name = name;
        // (*this).email = email;
        this->name = name;
        this->email = email;
    }

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
    // actor1.name = "Steve";
    // actor1.email = "steve@email";

    cout << actor1.toString() << endl;
    cout << actor2.toString() << endl;

    return 0;
} // fim da função principal