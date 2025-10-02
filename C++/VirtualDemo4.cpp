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
        virtual void sun()

        {
            cout<<"Inside fun";
        }
        virtual void bun()

        {
            cout<<"Inside fun";
        }
};
class Derived : public Base
{
    public:
        int x;
        void gun()

        {
            cout<<"Inside fun";
        }
         void sun()

        {
            cout<<"Inside fun";
        }
         void run()

        {
            cout<<"Inside fun";
        }
};

int main()
{   
    cout<<sizeof(Base)<<"\n";\
    cout<<sizeof(Derived)<<"\n";
    Base *bp = new Derived();
    
    /*bp->fun();
    bp->gun();
    bp->sun();
   // bp->run();
   */
    return 0;
}