#include <iostream>
#include "Birthday.h"
#include "Person.h"
using namespace std;

class MyClass {
    public:
        int var;

        MyClass(){}
        MyClass(int a): var(a){}
        MyClass operator+(MyClass &obj)
            {
                cout << &obj << endl;
                MyClass res;
                res.var = this->var  + obj.var;
                return res;
            }
          MyClass operator*(MyClass &obj)
            {
                cout << (*(&obj)).var << endl;

                MyClass res;
                res.var = this->var  * obj.var;
                return res;
            }
    };


    class Mother
    {
        public:
            Mother(){
            cout << "Mother ctor\n";
            }
            ~Mother(){
            cout << "Mother dtor";
            }
            void sayHi()
            {
                cout << "Hi!";
            }
        private:
            int var=0;
        protected:
            int someVar = 13;
     };

     class Daugther : public Mother
     {

            public:Daugther(){
                cout << "Daugther ctor\n";};
            public:~Daugther(){
                cout << "Daugther dtor\n";};

            void sayHiToo()
            {
                cout << someVar;
            }
     };


   class Enemy {
   protected:
       int attackPower;
   public :
        void setAttackPower (int a){
        attackPower = a;}
    }  ;
    class Ninja : public Enemy{
    public:
        void attack(){
        cout << "Ninja!-" << attackPower << endl;}
    };
    class Monster : public Enemy{
    public:
        void attack(){
        cout << "Monster!-" << attackPower << endl;}
    };

int main()
{
    Ninja n;
    Monster m;
    Enemy *e1 = &n;
    Enemy *e2 = &m;

    e1->setAttackPower(20);
    e2->setAttackPower(30);

    n.attack();
    m.attack();



  //  MyClass obj1(1), obj2(2), obj3(4);
  /*  MyClass res = obj1+obj2+obj3;
    cout << res.var << endl;*/

  /*  MyClass res = obj1*obj2*obj3;
    cout << res.var << endl;*/

    //Daugther dObj;
  // dObj.sayHi();
   // dObj.sayHiToo();
  //  cout << &obj1 << endl;
    //Birthday bd(2,23,1982);
    //Person p("Mikhail", bd);
    //p.printInfo();
    return 0;
}
