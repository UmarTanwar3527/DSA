import java.util.Scanner;
import java.util.Arrays;

public class IntroArr {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        // int arr[] = new int[5];

        // for(int i = 0; i < arr.length; i++){
        //     arr[i] = sc.nextInt();
        // }

        // for (int element : arr) {
            // System.out.print(element + " ");
        // }

        // System.out.println(Arrays.toString(arr));

        // Array of Objects
        String str[] = new String[4];
        for (int i = 0; i < str.length; i++) {
            str[i] = sc.next();
        }
        sc.close();
        System.out.println(Arrays.toString(str));

    }
}
