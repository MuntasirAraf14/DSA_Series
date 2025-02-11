#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {1,3,4,2,2};
    int n = nums.size();
    int slow = nums[0];
    int fast = nums[0];
    do{
        slow = nums[slow]; //+1
        fast = nums[nums[fast]]; //+2
    }while(slow!=fast);

    slow = nums[0];

    while(slow!=fast){
        slow = nums[slow];
        fast = nums[fast];
    }
    
    cout<<slow;


    return 0;        
}   