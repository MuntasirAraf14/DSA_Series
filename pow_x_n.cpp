#include <bits/stdc++.h>
using namespace std; 

int main() {
    double x;
    int n;

    cin>>x>>n;

  
    if (n == 0) {
        cout << 1.0 << endl;  
        return 0;
    }
    if (x == 0) {
        cout << 0.0 << endl; 
        return 0;
    }

   
    bool isNegative = (n < 0);
    long long absN = abs(n);
    double result = 1.0;

   
    while (absN > 0) {
        if (absN % 2 == 1) {
            result *= x;  
        }
        x *= x;          
        absN /= 2;      
    }

    if (isNegative) {
        result = 1.0 / result;  
    }

    cout << result << endl;  
    return 0;
}
