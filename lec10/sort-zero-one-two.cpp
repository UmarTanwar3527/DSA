#include <bits/stdc++.h> 
using namespace std;

void sortArray(vector<int>& nums, int n)
{
    // Write your code here

    int low = 0, mid = 0, high= n - 1;
        while(mid<=high){
            switch(nums[mid]){
                case 0:
                    swap(nums[low],nums[mid]);
                    low++,mid++;
                    break;
                case 1:
                    mid++;
                    break;
                case 2:
                    swap(nums[mid],nums[high]);
                    high--;
                    break;
            }
        }
}
