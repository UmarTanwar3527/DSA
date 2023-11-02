#include <bits/stdc++.h>  
using namespace std;
// BRUTE FORCE FOR A GIVEN TARGET
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
    // Write your code here. 
    vector<vector<int>> ans; 
    
    for(int i=0; i<n; i++) {  
        for(int j=i+1 ; j<n; j++)  {   
            for(int k=j+1; k<n; k++)   {    
                if(arr[i]+arr[j]+arr[k] == K){     
                    vector<int>triplet;     
                    triplet.push_back(arr[i]);     
                    triplet.push_back(arr[j]);     
                    triplet.push_back(arr[k]);     
                    sort(triplet.begin(),triplet.end());     

                    bool isDuplicateFound = false;
                    for(const vector<int> &element: ans){
                        if(element == triplet){
                            isDuplicateFound = true;
                            break;
                        }
                    }
                    if(!isDuplicateFound){
                        ans.push_back(triplet);
                    }
                }   
            }  
        } 
    } 
    return ans; 
}


// USING HASHMAP FOR 0

vector<vector<int>> triplet(int n, vector<int> &arr)
{     
    set<vector<int>> st;
    
    for(int i = 0; i < n ; i++){
        set<int> hashset;
        for(int j = i + 1;j < n ; j++){
            int third = -(arr[i] + arr[j]);
            if(hashset.find(third) != hashset.end()){
                vector<int> temp = {arr[i], arr[j], arr[third]} ;
                sort(temp.begin(),temp.end());
                st.insert(temp);
            }
            hashset.insert(arr[j]);
        }
    }
    vector<vector<int>> ans(st.begin(),st.end());
    return ans;
}


// TWO POINTER APPROACH FOR A GIVEN TARGET

vector<vector<int>> findTriplets(vector<int>nums, int n, int K){
    vector<vector<int>> ans;
	set<vector<int>>s;
    int target=K;
    sort(nums.begin(),nums.end());

    for(int i=0;i<nums.size();i++){
        int j=i+1;
        int k=nums.size()-1;
        while(j<k){
            int sum=nums[i]+nums[j]+nums[k];
            if(sum==target){
                s.insert({nums[i],nums[j],nums[k]});
                j++,k--;
            }
            else if(sum<target){
                j++;
            }
            else{
                k--;
            }
        }
    }
    for(const auto& triplets : s){
		ans.push_back(triplets);
	} // yee pata kr na hai
    return ans;
}


// TWO POINTER APPROACH FOR A GIVEN 0

vector<vector<int>> triplet(int n, vector<int> &arr){
    // set<vector<int>> st;
    vector<vector<int>> ans;
    sort(arr.begin(),arr.end());
    for(int i = 0; i < n ; i++){
        if(i>0 && arr[i] == arr[i-1]) continue;
        int j = i +1;
        int k = n -1;
        while(j<k){
            int sum = arr[i] + arr[j] + arr[k];
            if(sum<0){
                j++;
            }
            else if (sum>0){
                k--;
            }
            else{
                vector<int> temp = {arr[i],arr[j],arr[k]};
                ans.push_back(temp);
                j++;
                k--;
                while(j<k && arr[j] == arr[j-1]) j++;
                while(j<k && arr[k] == arr[k+1]) k--;
            }
        }
       
    }
    return ans;
}
