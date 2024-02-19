import java.util.Scanner;

class InputOutput {
    public static void main(String[] args) {

        Scanner scan = new Scanner(System.in);
        char a = scan.next().charAt(0);
        if (a >= 'a' && a <= 'z') {
            System.out.print(0);
        } else if (a >= 'A' && a <= 'Z') {
            System.out.print(1);
        } else {
            System.out.print(-1);
        }
        scan.close();
    }
}