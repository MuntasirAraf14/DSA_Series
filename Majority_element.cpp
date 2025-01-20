//Moore's Algorithm - O(N)

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Entered array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Step 1: Find the candidate for the majority element
    int freq = 0, candidate = 0;
    for (int i = 0; i < n; i++) {
        if (freq == 0) {
            candidate = arr[i];
        }
        if (candidate == arr[i]) {
            freq++;
        } else {
            freq--;
        }
    }

    // Step 2: Verify if the candidate is actually a majority element
    freq = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == candidate) {
            freq++;
        }
    }

    if (freq > n / 2) {
        cout << "Majority element: " << candidate << endl;
    } else {
        cout << "No majority element found" << endl;
    }

    return 0;
}
