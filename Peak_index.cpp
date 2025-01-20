//Time Complexity - O(logN)

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

  
    int st = 1, end = n - 2;
    int result = -1;

    while (st <= end) {
        int mid = st + (end - st) / 2; 

       if(nums[mid-1] < nums[mid] && nums[mid] > nums[mid+1]){
            result = mid;
            break;
       }

        else if(nums[mid-1] < nums[mid]){//right
                st = mid + 1;
            }
            else{//left
                end = mid - 1;
            }
        }            
        
    

    if (result != -1) {
        cout << "Searched number is at index: " << result << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}


