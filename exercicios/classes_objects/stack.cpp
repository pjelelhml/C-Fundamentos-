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

Person *createPerson()
{
    Person p("Hanna");
    return &p;
}

// Inicio da função principal
int main()
{
    Person *pp1;

    {
        Person p1("Peter");
        pp1 = &p1;
    }

    Person *pp2 = createPerson();

    cout << pp1->name << endl;
    cout << pp2->name << endl;

    cout << "End of Code!" << endl;
    return 0;
} // fim da função principal