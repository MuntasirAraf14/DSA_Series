#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s); 
    
    vector<string> words;
    stringstream ss(s);
    string word;

    while (ss >> word) { // Extract words ignoring extra spaces
        words.push_back(word);
    }

    reverse(words.begin(), words.end()); 
    
    string ans = "";
    for (int i = 0; i < words.size(); i++) {
        ans += words[i];
        if (i != words.size() - 1) ans += " "; // Add space between words
    }

    cout << ans << endl;
    return 0;
}
