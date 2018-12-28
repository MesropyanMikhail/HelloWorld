#include "Birthday.h"
#include <iostream>
using namespace std;

Birthday::Birthday(int m, int d, int y): month(m), day(d), year(y)
{
   // cout << "month " << month << endl;
}
void Birthday::printDate()
{
    //  cout << "Hello world!" << endl;
    cout << month << "/" << day << "/" << year << endl;


}
