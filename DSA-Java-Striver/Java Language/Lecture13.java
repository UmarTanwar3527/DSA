
public class Lecture13 {

    public static void main(String[] args) {
        // SBFunctions();
        ReverseString();
    }

    public static void SBFunctions(){
        StringBuilder sb = new StringBuilder("Apna College");
        System.out.println(sb);

        System.out.println(sb.charAt(3));

        sb.setCharAt(5, '#');
        System.out.println(sb);

        sb.insert(5, 'C');
        System.out.println(sb);

        sb.delete(6, 7);
        System.out.println(sb);

        sb.append(" Great");
        System.out.println(sb);
        
        System.out.println(sb.length());
    }

    public static void ReverseString(){
        StringBuilder sb = new StringBuilder("Hello World");

        for (int i = 0; i < sb.length() / 2; i++) {
            int front = i;
            int back = sb.length() - i -1;
 
            char frontChar = sb.charAt(front);
            char backChar = sb.charAt(back);

            sb.setCharAt(front, backChar);
            sb.setCharAt(back, frontChar);
            
        }

        System.out.println(sb);
    }
}
