#include <bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int> &arr) 
{
    // Write your code here
    int ans =0;
    for(int i = 0;i < arr.size(); i++){
        ans = ans^arr[i];
    }
	for(int i = 0; i < arr.size(); i++){
        ans = ans^i;
    }
    return ans;    
}



// FIND DUPLICATE HOMEWORK QUES 442 LEETCODE
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans ;
        
        for(int n :nums){
            n = abs(n);
            if(nums[n-1]>0){
                nums[n-1] *= -1;
            }
            else
                ans.push_back(n);
        }
        return ans;        
    }
};