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

    for(int st=0; st<n; st++){
        for(int end=st; end<n; end++){
            for(int j=st; j<=end; j++){
                cout<<arr[j];
            }
           cout<<" ";
        }
         cout<<endl;
    }


    return 0;
}