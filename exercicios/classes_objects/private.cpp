// Bibliotecas
#include <iostream>
using namespace std;

const double MINIMUM_WAGE = 1500;

// Classe Employee
class Employee
{
public:
    string name;

private:
    double wage;

public:
    string getName()
    {
        return this->name;
    }

    void setName(string name)
    {
        this->name = name;
    }

public:
    double getWage()
    {
        return wage > MINIMUM_WAGE ? wage : MINIMUM_WAGE;
    }

    void setWage(double w)
    {
        if (w >= MINIMUM_WAGE)
            wage = w;
    }
};

// Inicio da função principal
int main()
{
    Employee emp1;
    emp1.name = "Paulo Smith";
    emp1.setWage(500000);

    cout << "US$ " << emp1.getWage() << endl;

    return 0;
} // fim da função principal