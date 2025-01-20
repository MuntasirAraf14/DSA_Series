//Time Complexity: O(N)

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Entered Water sizes: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int maxWater = 0;
    int lp = 0, rp = arr.size() - 1;

    while(lp < rp){
        int w = rp - lp;
        int ht = min(arr[lp], arr[rp]);
        int currWater = w*ht; 
        maxWater = max(maxWater, currWater);

        arr[lp] < arr[rp] ? lp++ : rp--;


    }

    cout<<"Container with most water should be: "<<maxWater;

    return 0;
}
