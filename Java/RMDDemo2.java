//RMD - Runtime Methond Dispatch

class Base
{
    public int i,j;
    public void fun()
    {
        System.out.ptinln("Inside Base fun");
    }
    public void Gun()
    {
        System.out.ptinln("Inside Base Gun/");
    }
    public void Sun()
    {
        System.out.ptinln("Inside Base Sun");
    }
    public void Bun()
    {
        System.out.ptinln("Inside Base Bunn");
    }

}
class Derived extends Base
{
    public int x;
    public void fun()
    {
        System.out.ptinln("Inside Derived  Gun");
    }
    public void fun()
    {
        System.out.ptinln("Inside Derived  Run");
    };
    }
    public void fun()
    {
        System.out.ptinln("Inside Base fun");
    }
    
}; 
class RMDDemo2
{
    public static void main(String A[])
    {

        Base bp = new Derived();
        bp.fun();
        bp.gun();
        bp.sun();
        bp.run();
        bp.mun();
        bp.bun();
;    }
}