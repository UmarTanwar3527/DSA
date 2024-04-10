// import java.util.*;

public class Patterns {

    // *
    // * *
    // * * *
    // * * * *
    public static void pattern1(int n) {
        // Write your code here
        for (int row = 1; row <= n; row++) {
            for (int col = 1; col <= row; col++) {
                System.out.print("* ");
            }
            System.out.println();
        }
    }

    // 1
    // 1 2
    // 1 2 3
    // 1 2 3 4
    public static void pattern2(int n) {
        // Write your code here
        for (int row = 1; row <= n; row++) {
            for (int col = 1; col <= row; col++) {
                System.out.print(col + " ");
            }
            System.out.println();
        }
    }

    // * * * *
    // * * *
    // * *
    // *
    public static void pattern3(int n) {
        // Write your code here
        for (int row = 1; row <= n; row++) {
            for (int col = 1; col <= n - row; col++) {
                System.out.print("* ");
            }
            System.out.println();
        }
    }

    // IF N = 5
    // 1 *
    // 2 **
    // 3 ***
    // 4 ****
    // 5 *****
    // 6 ****
    // 7 ***
    // 8 **
    // 9 *
    public static void pattern4(int n) {
        for (int row = 1; row <= 2 * n - 1; row++) { // for (int row = 0; row < 2 * n; row++)
            int star = row;
            if (row > n)
                star = 2 * n - row; // same 
            for (int col = 1; col <= star; col++) { // for (int col = 0; col < star; col++)
                System.out.print("* ");
            }
            System.out.println();
        }
    }

    //     *
    //    ***
    //   *****
    //  *******
    // *********
    public static void pattern5(int n) {
        for (int row = 0; row < n; row++) {
            for (int col = 0; col < n - row - 1; col++) {
                System.out.print(" ");
            }
            for (int col = 0; col < 2 * row + 1; col++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }

    //     *
    //    * *
    //   * * *
    //  * * * *    
    // * * * * *
    //  * * * *
    //   * * *
    //    * *
    //     *
    public static void pattern28(int n) {
        for (int row = 1; row <= 2 * n - 1; row++) { // for (int row = 0; row < 2 * n; row++)
            int star = row;
            if (row > n)
                star = 2 * n - row; // same 
            int numberspaces = n - star;
            for(int s = 0; s < numberspaces;s++){
                System.out.print(" ");
            }
            for (int col = 1; col <= star; col++) { // for (int col = 0; col < star; col++)
                System.out.print("* ");
            }
            System.out.println();
        }
    }


    //         1
    //       2 1 2
    //     3 2 1 2 3
    //   4 3 2 1 2 3 4
    // 5 4 3 2 1 2 3 4 5
    public static void pattern30(int n){
        for(int row = 1;row <= n;row++){
            for(int s = 0; s < n - row; s++){
                System.out.print("  ");
            }
            for(int col = row; col >= 1 ;col--){
                System.out.print(col + " ");
            }
            for(int col = 2;col <= row; col++){
                System.out.print(col + " ");
            }
            System.out.println();
        }
    }

    //      1
    //     212
    //    32123
    //   4321234
    //    32123
    //     212
    //      1
    public static void pattern17(int n){
        
        for(int row = 1;row <= 2*n;row++){
            
            int c = row;
            
            if (row > n)
                
                c = 2 * n - row;
            
                for(int s = 0; s < n - c; s++){
            
                System.out.print("  ");
            
            }
            
            for(int col = c; col >= 1 ;col--){

                System.out.print(col + " ");

            }
            
            for(int col = 2;col <= c; col++){

                System.out.print(col + " ");

            }
            
            System.out.println();

        }
    }

    //  * * * * *
    //   * * * *
    //    * * *
    //     * *
    //      *
    public static void pattern11(int n){
        for(int row = 0;row < n;row++){
            // for()
            for(int col = 2 * n - 1; col > 0;col-- ){
                System.out.print("* ");
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        // System.out.println("Pattern 1");
        // pattern1(4);
        // System.out.println("Pattern 2");
        // pattern2(4);
        // System.out.println("Pattern 3");
        // pattern3(4);
        // System.out.println("Pattern 4");
        // pattern4(5);
        // System.out.println("Pattern 5");
        // pattern5(5);
        // System.out.println("Pattern 28");
        // pattern28(5);
        // System.out.println("Pattern 30");
        // pattern30(5);
        System.out.println("Pattern 17");
        pattern17(4);
        // System.out.println("Pattern 11");
        // pattern11(5);
    }
}