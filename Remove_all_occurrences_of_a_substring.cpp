#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    string sub;
    cin >> sub;

    int i=0;

    while(i < s.length() && s.find(sub) < s.length()){
        
        s.erase(s.find(sub) , sub.length());
       
    }
    cout<<s;
    return 0;
}
