//Time Complexity - O(logN)


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
    cout << endl;

    int st = 0, end = n - 1;
    int result = -1;

    while (st <= end) {
        int mid = st + (end - st) / 2;

        // Check if `mid` is the unique element
        if ((mid == 0 || nums[mid] != nums[mid - 1]) && (mid == n - 1 || nums[mid] != nums[mid + 1])) {
            result = nums[mid];
            break;
        }

        // Check which side to search
        if ((mid % 2 == 0 && nums[mid] == nums[mid + 1]) || (mid % 2 == 1 && nums[mid] == nums[mid - 1])) {
            st = mid + 1; // Unique element is in the right half
        } else {
            end = mid - 1; // Unique element is in the left half
        }
    }

    if (result != -1) {
        cout << "Unique number is: " << result << endl;
    } else {
        cout << "No unique number found." << endl;
    }

    return 0;
}
