#include "Person.h"
#include "Birthday.h"
#include <string>
#include <iostream>
using namespace std;

Person::Person(string n, Birthday b): name(n), bd(b)
{
    //ctor
}
void Person::printInfo()
{
    cout << name << endl;
    bd.printDate();

}
