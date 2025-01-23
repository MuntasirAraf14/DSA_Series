#include <bits/stdc++.h>
using namespace std;

bool isValid(vector<int> &arr, int a, int b, int maxAllowedPage) {
    int student = 1, pages = 0;

    for (int i = 0; i < a; i++) {
        if (arr[i] > maxAllowedPage) {
            return false; // A single book has more pages than allowed
        }

        if (pages + arr[i] <= maxAllowedPage) {
            pages += arr[i];
        } else {
            student++;
            pages = arr[i]; // Reset pages for the new student
        }
    }
    return student <= b;
}

int allocateBooks(vector<int> &arr, int a, int b) {
    if (b > a) { // More students than books
        return -1;
    }

    int sum = 0;
    for (int i = 0; i < a; i++) {
        sum += arr[i];
    }

    int ans = -1, st = 0, end = sum; // Range of possible answers

    while (st <= end) {
        int mid = st + (end - st) / 2;

        if (isValid(arr, a, b, mid)) { // Left
            ans = mid;
            end = mid - 1;
        } else { // Right
            st = mid + 1;
        }
    }
    return ans;
}

int main() {
    int n;
    cin >> n;

    if (n == 0) { // No books
        cout << -1 << endl;
        return 0;
    }

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int a, b;
    cin >> a >> b;

    cout << allocateBooks(arr, a, b) << endl;
    return 0;
}
