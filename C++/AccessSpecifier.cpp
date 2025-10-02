#include<iostream>

using namespace std;

class Base
{
    public:
        int i;
    private:
        int j;
    protected:
        int k;
    public:
        Base()
        {
            i = 10;j = 20; k = 30;
        }       
        void fun()
        {
            cout<<i<<"\n"; //Allowed
            cout<<j<<"\n"; //Allowed
            cout<<k<<"\n";//Allowed
        }

};
class Derived : public Base                //16
{
    public:
    int x;
        void Display()
        {
            cout<<i<<"\n";  //Allowed
            cout<<j<<"\n";  //Private
            cout<<k<<"\n";
        }
};
int main()
{
    Base bobj;
    Derived dobj;

    cout<<bobj.i<<"\n";   //Allowed
    cout<<bobj.j<<"\n"; //Error
    cout<<bobj.k<<"\n"; //Error

    cout<<dobj.i<<"\n";
    cout<<dobj.j<<"\n";
    cout<<dobj.k<<"\n";

    dobj.fun();
    dobj.Display();

    return 0;
}


