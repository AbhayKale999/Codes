import java.util.Scanner;
class SwitchDemo
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int std = 0;

        System.out.println("Enter your std : ");
        std = sobj.nextInt();

        switch(std)
        {
            case 1:
                System.out.println("Exam at 9 AM \n");
                break;
            case 2:
                System.out.println("Exam at 10 AM \n");
                break;
            case 3:
                System.out.println("Exam at 11 AM \n");
                break;
            case 4:
                System.out.println("Exam at 12 Noon \n");
                break;
            default:
                System.out.println("Invalid Standard \n");
        }
    }
}