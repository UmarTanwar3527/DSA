public class Prime{
    public static void main(String[] args){
        int ct=0;
        int n=0;
        int i=1;
        int j=1;

        while(n<20){
            j=1;
            ct=0;
            while(j<=i){
                if(i%j==0)
                ct++;
                j++;
            }
            if(ct==2){
                System.out.print(i+" ");
                n++;
            }
            i++;
        }
    }
}