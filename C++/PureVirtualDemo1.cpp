#include<iostream>
using namespace std;

class Base
{
    public:
        int i,k;
        int Addition(int a , int b)        //Concrete
        {
            return a + b;
        }
        virtual int Substraction(int a , int b) = 0;        //abstract

};
class Derived : public Base  //Error
{
    public:
        int x;
};
int main()
{   
    Base *bp = new Derived();

    return 0;
}