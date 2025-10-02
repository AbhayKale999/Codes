import java.util.Scanner;
class SelectionDemo2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int std = 0;

        System.out.println("Enter your std : ");
        std = sobj.nextInt();

        if(std <= 0 || std > 4)
        {
            System.out.println("Not a valid Standard");
        }
        if(std == 1)
        {
            System.out.println("You exam is at : 9AM");
        }
        else if(std == 2)
        {
            System.out.println("You exam is at : 10AM");
        }
        else if(std == 3)
        {
            System.out.println("Your exam is at : 11AM");
        }
        else if(std == 4)
        {
            System.out.println("Your exam is at : 12 NOON");
        }
    }
}