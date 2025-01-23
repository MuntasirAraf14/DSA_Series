#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> &arr, int a, int b, int minAllowedDistance) {
    int cows = 1, lastStallPosition = arr[0];

    for (int i = 0; i < a; i++) {
        if (arr[i] - lastStallPosition >= minAllowedDistance) {
           cows++;
              lastStallPosition = arr[i]; 
        }
        if(cows == b){
            return true;
        }
     }
    return false;
}

int getDistance(vector<int> &arr, int a, int b) {
    sort(arr.begin(), arr.end());

    int st = 0, end = arr[a-1] - arr[0];
    int ans = -1; 

    while (st <= end) {
        int mid = st + (end - st) / 2;

        if (isPossible(arr, a, b, mid)) { // right
            ans = mid;
            st = mid + 1;
        } else { // left
            end = mid - 1;
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

    cout << getDistance(arr, a, b) << endl;
    return 0;
}
