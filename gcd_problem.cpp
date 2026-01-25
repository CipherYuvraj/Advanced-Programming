#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int minOperations(int x, int y) {
    // If they already have a common divisor > 1
    if (gcd(x, y) > 1) {
        return 0;
    }
    
    // Count operations needed to make both even
    int operations = 0;
    if (x % 2 == 1) {  // x is odd
        operations++;
    }
    if (y % 2 == 1) {  // y is odd
        operations++;
    }
    
    return operations;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int x, y;
        cin >> x >> y;
        cout << minOperations(x, y) << endl;
    }
    
    return 0;
}
