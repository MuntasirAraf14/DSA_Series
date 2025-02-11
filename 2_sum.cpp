//Time Complexity: O(n)

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums = {2,7,11,15};
    int target = 9;
    unordered_map<int,int> mp;
    vector<int> ans;
    for(int i=0;i<nums.size();i++){
        if(mp.find(target-nums[i])!=mp.end()){
            
            ans.push_back(i);
            ans.push_back(mp[target-nums[i]]);
            
            break;
        }
        mp[nums[i]] = i;
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}