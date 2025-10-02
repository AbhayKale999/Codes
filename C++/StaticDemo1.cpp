#include<iostream>

using namespace std;

class Demo
{
    public:
        int i;
        int j;
        static int x;

        Demo()
        {
            this->i = 0;
            this->j = 0;
        }
        Demo(int a, int b)
        {
            this->i = a;
            this->j = b;
        }
        void Fun()     //needs object to be called  -- void Fun(Demo * const this)
        {
            cout<<"Inside Fun \n";
        }
        static void Gun()    //can be accessed without object since its static 
        {
            cout<<"Inside Gun \n";
        }
};
int Demo :: x = 11;   //Accessing static variable 

int main()
{
    Demo :: Gun();          //:: - Scope resolution // not in java - for java - .
    cout<<"Value of x is :" <<Demo :: x<<"\n";

    return 0;
}