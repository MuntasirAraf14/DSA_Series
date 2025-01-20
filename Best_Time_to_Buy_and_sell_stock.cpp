
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Entered Stock prices: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int maxProfit = 0, bestBuy = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i] > bestBuy){
            maxProfit = max(maxProfit, arr[i] - bestBuy);
        }
        bestBuy = min(bestBuy, arr[i]);
    }
    cout<<"Then the profit should be : "<<maxProfit;
    
    return 0;
}