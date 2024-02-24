
// Importing required classes
// import java.util.ArrayList;
// import javafx.util.Pair;
import java.util.AbstractMap;
import java.util.Map;

public class ImpSynt {

    public static void main(String[] args) {
        // Pair p1 = new Pair(3, 4);
        // Pair p2 = new Pair(3, 4);
        // Pair p3 = new Pair(4, 4);

        // Pair<Integer, Integer> p1 = new Pair<>(3, 4);
        // Pair<Integer, Integer> p2 = new Pair<>(3, 4);
        // Pair<Integer, Integer> p3 = new Pair<>(4, 4);

        // System.out.println(p1.equals(p2) + " " + p2.equals(p3));

        // boolean equalsP1P2 = p1.getKey().equals(p2.getKey()) && p1.getValue().equals(p2.getValue());
        // boolean equalsP2P3 = p2.getKey().equals(p3.getKey()) && p2.getValue().equals(p3.getValue());

        // System.out.println(equalsP1P2 + " " + equalsP2P3);


        // MAP
        Map.Entry<Integer, Integer> p1 = new AbstractMap.SimpleEntry<>(3, 4);
        Map.Entry<Integer, Integer> p2 = new AbstractMap.SimpleEntry<>(3, 4);
        Map.Entry<Integer, Integer> p3 = new AbstractMap.SimpleEntry<>(4, 4);

        boolean equalsP1P2 = p1.getKey().equals(p2.getKey()) && p1.getValue().equals(p2.getValue());
        boolean equalsP2P3 = p2.getKey().equals(p3.getKey()) && p2.getValue().equals(p3.getValue());

        System.out.println(equalsP1P2 + " " + equalsP2P3);
    }
}