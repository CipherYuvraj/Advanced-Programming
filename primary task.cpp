#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string a;
        cin >> a;

        
        if (a.substr(0, 2) == "10" && a.size() > 2) {
           
            string exponent_part = a.substr(2);

           
            if (exponent_part[0] == '0') {
                cout << "NO" << endl;
                continue;
            }

           
            int exponent_value = stoi(exponent_part);

           
            if (exponent_value >= 2) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
