import java.util.Scanner;

// class Sttringss {
// public static void main(String[] args) {
// String firstName = "Tony";
// String secondName = "Stark";

// String fullName = firstName + " " + secondName;

// for(int i=0; i<fullName.length(); i++) {
// System.out.println(fullName.charAt(i));
// }

// }
//     public static void main(String args[]) {
//         Scanner sc = new Scanner(System.in);
//         int size = sc.nextInt();
//         String array[] = new String[size];
//         int totLength = 0;

//         for (int i = 0; i < size; i++) {
//             array[i] = sc.next();
//             totLength += array[i].length();
//         }
//         System.out.println(totLength);
//     }
// }

// Take an array of Strings input from the user & find 
// the cumulative (combined) length of all those strings.

// class Pactice {
//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);
//         String name = sc.nextLine();
//         String lastname = sc.nextLine();

//         System.out.println(name.length() + lastname.length());

//         sc.close();
//     }
// }

// Input a string from the user. Create a new string called ‘result’ in which you will replace the letter ‘e’ in the original string with letter ‘i’. 
// Example : 
// original = "eabcdef" ; result = "iabcdif"
// Original = "xyz" ; result = "xyz"

public class Sttringss {
    // public static void main(String[] args) {
    // Scanner sc = new Scanner(System.in);
    // String input = sc.next(); // “eabcdef’

    // String result = "";

    // for(int i = 0;i < input.length();i++){
    // if(input.charAt(i) == 'e'){
    // result = result + 'i';
    // }
    // else{
    // result = result + input.charAt(i);
    // }
    // }
    // System.out.println(result);

    // sc.close();
    // }

    public static void main(String[] args) {
        String email = "umartanwar@gmail.com";
        String username = "";

        for (int i = 0; i < email.length(); i++) {
            if (email.charAt(i) == '@') {
                break;
            } else {
                username += email.charAt(i);
            }
        }

        System.out.println(username);
        
    }
}