#include <bits/stdc++.h>
using namespace std;


int main() {
    vector<char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c'}; 
    int n = chars.size();
    int idx = 0;

    for (int i = 0; i < n; i++) {
        char ch = chars[i];
        int count = 0;
        
        while (i < n && chars[i] == ch) {
            i++;
            count++;
        }

        chars[idx++] = ch;
        
        if (count > 1) {
            string s = to_string(count);
            for (char c : s) {
                chars[idx++] = c;
            }
        }
        
        i--;  // Adjust 'i' as the for-loop will increment it
    }

    chars.resize(idx);
    
    // Output the compressed characters
    for (char c : chars) {
        cout << c << " ";
    }
    cout << endl;

    cout << "Compressed length: " << idx << endl;
    
    return 0;
}
