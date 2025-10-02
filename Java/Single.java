class Base    //8
{
    public int i,j;
    public void fun()
    {
        System.out.println("Inside Base Fun \n");
    }
}
class Derived extends Base   //12
{
    public int x;

    public void gun()
    {
        System.out.println("Inside derived Gun\n");
    }
}
class Single
{
    public static void main(String A[])
    {
        Base bobj = new Base();
        Derived dobj = new Derived();


        bobj.fun();
        dobj.fun();
        dobj.gun();

    }
}