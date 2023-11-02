#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s = 0 , end = arr.size() - 1 ;
        int mid = s + (end - s) / 2;
        while(s < end) {
            if(arr[mid] < arr[mid + 1]) {
                s = mid + 1;
            }
            else {
                end = mid;
            }
            mid = s + (end - s) / 2;
        }
        return s;
    }
};

int main() {
    Solution solution;
    vector<int> arr = {1, 3, 20, 45, 10, 5, 2};
    int peakIndex = solution.peakIndexInMountainArray(arr);
    cout << "Peak index in the mountain array: " << peakIndex << endl;
    return 0;
}