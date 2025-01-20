 
//Time complexity : O(N^2)

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Entered array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int target;
    cin>>target;

    vector<int>ans;

    for(int i=0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if(arr[i] + arr[j] == target){
                ans.push_back(i);
                ans.push_back(j);
                cout<<"Indices: "<<i<<" "<<j<<endl;
                return 0;
            }
        }  
    }

    cout<<"No pair found"<<endl;

    return 0;
}

