#ifndef PERSON_H
#define PERSON_H
#include <string>
#include "Birthday.h"

using namespace std;


class Person
{
    public:
        Person(string n, Birthday b);
        void printInfo();
    protected:

    private:
        string name;
        Birthday bd;
};

#endif // PERSON_H
