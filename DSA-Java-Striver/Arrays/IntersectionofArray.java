import java.util.ArrayList;
import java.util.List;
public class IntersectionofArray {
    public static List<Integer> findArrayIntersection(List<Integer> arr1, int n, List<Integer> arr2, int m) {
        int i = 0, j = 0;
        List<Integer> ans = new ArrayList<>();

        while (i < n && j < m) {
            if (arr1.get(i).equals(arr2.get(j))) {
                ans.add(arr1.get(i));
                i++;
                j++;
            } else if (arr1.get(i) < arr2.get(j)) {
                i++;
            } else {
                j++;
            }
        }
        return ans;
    }

    public static void main(String[] args) {
        // Example usage
        List<Integer> arr1 = List.of(1, 2, 4, 5, 6);
        List<Integer> arr2 = List.of(2, 3, 5, 7);

        List<Integer> intersection = findArrayIntersection(arr1, arr1.size(), arr2, arr2.size());

        System.out.println("Intersection: " + intersection);
    }
}

// vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
// {
// 	// Write your code here.
// 	int i = 0,j=0;
// 	vector<int> ans;

// 	while(i<n && j<m){
// 		if(arr1[i]==arr2[j]){
// 			ans.push_back(arr1[i]);
// 			i++;
// 			j++;
// 		}
// 		else if(arr1[i]<arr2[j]){
// 			 i++;
// 		}
// 		else{
// 			j++;
// 		}
// 	}
// 	return ans;
// }