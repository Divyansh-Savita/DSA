import java.util.Scanner;
class Remainder{
    static public void main(String[] perls){
        Scanner sc=new Scanner(System.in);
        int a=sc.nextInt();
        int b=sc.nextInt();
        int Remainder=a-b*(a/b);
        System.out.println(Remainder);
        sc.close();
    }
}