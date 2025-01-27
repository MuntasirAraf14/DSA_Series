#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a;

    vector<int> arr(a);
    for (int i = 0; i < a; i++) {
        cin >> arr[i];
    }

    int pivot = -1;

    // Find the pivot index
    for (int i = a - 2; i >= 0; i--) {
        if (arr[i] < arr[i + 1]) {
            pivot = i;
            break;
        }
    }

    // If no pivot found, reverse the array (it's the last permutation)
    if (pivot == -1) {
        reverse(arr.begin(), arr.end());
    } else {
        // Find the first element from the end that is larger than arr[pivot]
        for (int i = a - 1; i > pivot; i--) {
            if (arr[i] > arr[pivot]) {
                swap(arr[i], arr[pivot]);
                break;
            }
        }
        // Reverse the suffix
        reverse(arr.begin() + pivot + 1, arr.end());
    }

    // Print the result
    for (int i = 0; i < a; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
