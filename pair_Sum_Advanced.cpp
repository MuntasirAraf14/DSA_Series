 
//Time complexity : O(N)

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
    int i=0, j=n-1;

    while(i < j){
        int pairSum = arr[i] + arr[j];
        if(pairSum > target){
            j--;
        }
        else if(pairSum < target){
            i++;
        }
        else{
            ans.push_back(i);
            ans.push_back(j);
            cout<<"Indices: "<<i<<" "<<j<<endl;
                return 0;
        }
    }
    

    cout<<"No pair found"<<endl;

    return 0;
}

