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
};
class Derived : public Base
{
    public:
        int x;
};

int main()
{
    Base *bp1 = new Base();
    Derived *dp1 = new Derived();
    Base *bp2 = new Derived();
    Derived *dp2 = new Base()
    

    Derived *dp3 =  new Base();
    return 0;
}