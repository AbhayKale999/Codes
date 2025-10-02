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
class Derived : public Base  
{
    public:
        int x;
        int Substraction(int a , int b)   //Concrete
        {
            return a - b;
        }
        int Multiplication(int a , int b)   //Concrete
        {
            return a * b;
        }         
};
int main()
{   
    Base *bp = new Derived();   //Upcasting
    int iRet = 0;

    iRet = bp->Addition(11,10);
    cout<<iRet<<"\n";
    iRet = bp->Substraction(11,10);
    //iRet = bp->Multiplication(11,10);   //Error
    

    return 0;
}