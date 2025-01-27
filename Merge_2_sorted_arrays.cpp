#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    vector<int> arr1(a + b); 
    vector<int> arr2(b);

    
    for (int i = 0; i < a; i++) {
        cin >> arr1[i];
    } 

  
    for (int i = 0; i < b; i++) {
        cin >> arr2[i];
    }

    int idx = a + b - 1; 
    int i = a - 1;       
    int j = b - 1;      

    // Merge arrays in reverse order
    while (i >= 0 && j >= 0) {
        if (arr1[i] >= arr2[j]) {
            arr1[idx] = arr1[i];
            idx--;
            i--;
        } else {
            arr1[idx] = arr2[j];
            idx--;
            j--;
        }
    }

    // If arr2 still has elements, copy them
    while (j >= 0) {
        arr1[idx] = arr2[j];
        idx--;
        j--;
    }

    // Print the merged array
    for (int i = 0; i < a + b; i++) {
        cout << arr1[i] << " ";
    }

    cout << endl;

    return 0;
}
