// Bibliotecas
#include <iostream>
#include <sstream>
using namespace std;

// Classe Date
class Date
{
public:
    int day;
    int month;
    int year;

    string toString()
    {
        stringstream ss;
        ss << day
           << "/"
           << month
           << "/" << year;
        return ss.str();
    }
};

// Inicio da função principal
int main()
{

    Date d1;
    d1.day = 1;
    d1.month = 11;
    d1.year = 2023;

    Date d2;
    d2.day = 2;
    d2.month = 11;
    d2.year = 2023;

    cout << d1.toString() << endl;
    cout << d2.toString() << endl;

    return 0;
} // fim da função principal