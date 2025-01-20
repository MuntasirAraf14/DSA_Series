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

    int maxSum = INT_MIN;

    for(int st=0; st<n; st++){
        int currSum = 0;
        for(int end=st; end<n; end++){
                currSum += arr[end];
                maxSum = max(currSum, maxSum);
            }
           
        }
         cout<<"Max subarray sum = "<<maxSum<<endl;
    


    return 0;
}