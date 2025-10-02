//RMD - Runtime Methond Dispatch

abstract class Base
{
    public int i,j;
    public int Addition(int a , int b)
    {
        return a + b;
    }
    abstract int substraction(int a , int b);
}
class Derived extends Base
{
    public int x;
        int substraction(int a , int b)
        {
            return a - b;
        }
        int Multiplication(int a , int b)
        {
            return a * b;
        }      
}; 
class AbstractDemo2
{
    public static void main(String A[])
    {
        Base bp = new Derived();    
        int iRet = 0;
        iRet = bp.Addition(10,11);
        System.out.println(iRet);
        //iRet = bp.Multiplication(5,4);            //Error
    }
}