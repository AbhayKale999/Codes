#include<iostream>
using namespace std;

class Base
{
    public:
        int i,k;
        void fun()

        {
            cout<<"Inside fun";
        }
        void gun()

        {
            cout<<"Inside fun";
        }
        void sun()

        {
            cout<<"Inside fun";
        }
};
class Derived : public Base
{
    public:
        int x;
};

int main()
{   
    Base *bp = new Derived();
    
    bp->fun();
    bp->gun();
    bp->sun();
   // bp->run();
    return 0;
}