//Time Complexity: O(n)

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int count=0;
    vector<int> prefixSum(n, 0);
    prefixSum[0] = arr[0];
    for(int i=1; i<n; i++){
        prefixSum[i] = prefixSum[i-1] + arr[i];
    }

    unordered_map<int, int> mp;
    mp[0] = 1;
    for(int i=0; i<n; i++){
        if(mp.find(prefixSum[i] - k) != mp.end()){
            count += mp[prefixSum[i] - k];
        }
        mp[prefixSum[i]]++;
    }
    cout<<count<<endl;
    return 0;
}