// import java.io.BufferedReader;
// import java.io.InputStreamReader;
// import java.io.IOException;

public class DataTypes {
    public static int dataTypes(String type) {
        if(type.equals("Integer")){
            return 4;
        }
        else if(type.equals("Float")){
            return 4;
        }
        else if(type.equals("Long")){
            return 8;
        }
        else if(type.equals("Double")){
            return 8;
        }
        else if(type.equals("Character")){
            return 1;
        }
        else{
            return -1;
        }
    }
    // public static void main(String[] args) {
    //     char str = 'u';
    //     int ans = dataTypes(str);
    //     System.out.println(ans);
    // }
}
