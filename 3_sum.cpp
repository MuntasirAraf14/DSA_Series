#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> res;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++) {
        if (i > 0 && nums[i] == nums[i - 1]) {
        continue;
        }
        int left = i + 1;
        int right = nums.size() - 1;
        while (left < right) {
            int sum = nums[i] + nums[left] + nums[right];
            if (sum < 0) {
            left++;
            } else if (sum > 0) {
            right--;
            } else {    
            res.push_back({nums[i], nums[left], nums[right]});
            while (left < right && nums[left] == nums[left + 1]) {
                left++;
            }   
            while (left < right && nums[right] == nums[right - 1]) {
                right--;
            }   
            left++;
            right--;
            }
        }
    }
    return res;

}   

int main(){
    vector<int> nums = {-1,0,1,2,-1,-4};
    vector<vector<int>> res = threeSum(nums);
    for(int i=0;i<res.size();i++){
        for(int j=0;j<res[i].size();j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;

}