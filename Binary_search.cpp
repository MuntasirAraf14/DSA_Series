//Time Complexity: O(logN) 

#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;

    vector<int>nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Entered Numbers: ";
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    int target;
    cin >> target;

    int st = 0, end = n - 1;
    int result = -1; 

    while (st <= end) {
        int mid = st + (end - st) / 2; // Avoid potential overflow

        if (target > nums[mid]) {
            st = mid + 1;
        } else if (target < nums[mid]) {
            end = mid - 1; 
        } else {
            result = mid; 
            break;        
        }
    }

    if (result != -1) {
        cout << "Searched number is at index: " << result << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}


