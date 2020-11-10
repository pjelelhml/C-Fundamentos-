// Bibliotecas
#include <iostream>
using namespace std;

class User
{
public:
    string name;
    string email;

    // Construtor #01
    User() {}

    // Construtor #02
    User(string _name, string _email)
    {
        name = _name;
        email = _email;
    }

    string toString()
    {
        return name + " [" + email + "]";
    }
};

// Inicio da função principal
int main()
{
    User user1;
    user1.name = "Peter Johnson";
    user1.email = "peter.johnson@zymail.com";

    User user2("Mary M.", "alo@mgo.com");
    User user3 = User("Mary M.", "alo@mgo.com");

    cout << user1.toString() << endl;
    cout << user2.toString() << endl;
    cout << user3.toString() << endl;

    return 0;
} // fim da função principal