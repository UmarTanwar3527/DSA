import java.util.ArrayList;
import java.util.Collections;
import java.util.TreeMap;

public class CommonElementGFG{
    public static ArrayList<Integer> common_element(int v1[], int v2[])
    {
        //Your code here
        // ArrayList<Integer> result = new ArrayList<>();

        // Arrays.sort(v1);
        // Arrays.sort(v2);

        // int i = 0, j = 0;

        // while (i < v1.length && j < v2.length) {
        //     if (v1[i] == v2[j]) {
        //         result.add(v1[i]);
        //         i++;
        //         j++;
        //     } else if (v1[i] < v2[j]) {
        //         i++;
        //     } else {
        //         j++;
        //     }
        // }
        // return result;
        ArrayList<Integer>list=new ArrayList<>();
        TreeMap<Integer,Integer>tm1=new TreeMap<>();
        for(int x:v1)
            tm1.put(x,tm1.getOrDefault(x,0)+1);
        for(int x:v2){
            if(tm1.containsKey(x)&&tm1.get(x)>0){
                tm1.put(x,tm1.get(x)-1);
                list.add(x);
            }
        }
        Collections.sort(list);
        return list;
    }
}