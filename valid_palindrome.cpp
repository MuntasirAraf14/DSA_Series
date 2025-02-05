#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
    int st = 0, end = s.size()-1;
    while(st <= end){
        if(!isalnum(s[st])){
            st++;
        }else if(!isalnum(s[end])){
            end--;
        }else if(tolower(s[st])!=tolower(s[end])){
            return false; 
        }else{
            st++;
            end--;
        }
    }
    return true;
}   

int main(){
    string s;
    cin >> s;
    cout << isPalindrome(s);
    return 0;
}   