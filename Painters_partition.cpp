#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> &arr, int a, int b, int maxAllowedTime){
    int painters = 1, time = 0;

    for (int i = 0; i < a; i++) {
        if (arr[i] + time <= maxAllowedTime) {
            time += arr[i]; 
        }
        else{
            painters++;
            time = arr[i];
        }

     }
    return painters <= b;
}

int minTimeToPaint(vector<int> &arr, int a, int b) {
    int sum = 0, maxVal = INT_MIN;
    for (int i = 0; i < a; i++) {
        sum += arr[i];
        maxVal = max(maxVal, arr[i]);
    }

    int ans = -1, st = maxVal, end = sum; 

    while (st <= end) {
        int mid = st + (end - st) / 2;

        if (isPossible(arr, a, b, mid)) { // Left
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
 
    if (n == 0) { 
        cout << -1 << endl;
        return 0;
    }

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int a, b;
    cin >> a >> b;

    cout << minTimeToPaint(arr, a, b) << endl;
    return 0;
}
