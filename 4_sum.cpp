//Time Complexity: O(nlogn + n^3)

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int target) {
    
    vector<vector<int>>ans;
    sort(nums.begin(), nums.end());

    for(int i=0; i<nums.size(); i++){   
        if(i>0 && nums[i]==nums[i-1]) continue;
        for(int j=i+1; j<nums.size(); j++){
            if(j>i+1 && nums[j]==nums[j-1]) continue;
            int left = j+1;
            int right = nums.size()-1;
            while(left<right){

                long long sum = (long long)nums[i]+ (long long)nums[j]+ (long long)nums[left]+ (long long)nums[right];

                if(sum==target){

                    ans.push_back({nums[i], nums[j], nums[left], nums[right]});

                    while(left<right && nums[left]==nums[left+1]) 
                    left++;

                    while(left<right && nums[right]==nums[right-1]) right--;

                    left++;

                    right--;

                }

                else if(sum<target){
                    left++;
                }

                else{
                    right--;
                }
            }
        }
    }
    return ans;
}

int main(){
    
    vector<int> nums = {1,0,-1,0,-2,2};
    int target = 0;
    vector<vector<int>> res = fourSum(nums, target);
    for(int i=0; i<res.size(); i++){
        for(int j=0; j<res[i].size(); j++){
            cout<<res[i][j]<<"";
        }
        cout<<endl;
    }

    return 0;
}       