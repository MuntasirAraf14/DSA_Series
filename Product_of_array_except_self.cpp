

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Entered Numbers: ";
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    cout<<endl;

    vector<int>ans(n, 1);
    //vector<int>prefix(n, 1);
    //vector<int>suffix(n, 1);

   
    //prefix
    for(int i=1; i<n; i++){
       ans[i] = ans[i-1] * nums[i-1];
    }

    int suffix = 1;
    //suffix
    for(int i=n-2; i>=0; i--){
        suffix *= nums[i+1];
        ans[i] *= suffix;
    }
    cout<<"The product array should be: " <<endl;
    for(int i=0; i<n; i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
   
    return 0;
}
