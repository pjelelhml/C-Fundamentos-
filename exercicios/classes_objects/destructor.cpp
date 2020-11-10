// Bibliotecas
#include <iostream>
using namespace std;

class Person
{
public:
    string name;

    Person(string name) : name(name)
    {
        cout << "Hello! My name is " << name << endl;
    }

    ~Person()
    {
        cout << name << " saying goodbye!" << endl;
    }
};

// Inicio da função principal
int main()
{

    Person *p0 = new Person("Test");

    Person p1("Peter");

    {
        Person p2{"Mary"};
        Person p3{"John"};
        Person p4 = Person("Hanna");
    }

    cout << "End of Code!" << endl;

    return 0;
} // fim da função principal