#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<char> s(n);
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    
    int st= 0, end = n-1;
    while(st<=end){
        swap(s[st], s[end]);
        st++;
        end--;
    }
    for(int i=0;i<n;i++){
        cout<<s[i];
    }

    return 0;
}