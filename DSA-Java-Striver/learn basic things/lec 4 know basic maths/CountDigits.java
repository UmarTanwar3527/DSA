

public class CountDigits {
    public static void main(String[] args) {
        System.out.println(evenlyDivides(2446));
    }
    static int evenlyDivides(int N){
        int divisibles = 0;
        int num = N;
        
        while(num > 0){
            int digit = num % 10;
            if(digit != 0 && N % digit == 0) divisibles++;
            num /= 10;
        }
        return divisibles;
    }
}
