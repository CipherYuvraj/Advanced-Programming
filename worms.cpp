#include<bits/stdc++.h>
using namespace std;

string conv(int &n) {
    if (n== 0) {
        return "zero";
    }
    
    string one[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    string ten[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    string teen[] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    
    string w = "";
    
    if (n >= 1000) {
        w += one[n / 1000] + " thousand ";
        n %= 1000;
    }
    
    if (n >= 100) {
        w += one[n / 100] + " hundred ";
        n %= 100;
    }
    
    if (n >= 10 && n <= 19) {
        w += teen[n - 10] + " ";
        n = 0;
    } else if (n >= 20) {
        w += ten[n / 10] + " ";
        n %= 10;
    }
    
    if (n >= 1 && n <= 9) {
        w += one[n] + " ";
    }
    
    return w;
}

int main() {
    int n;
    cin >> n;
    
    string w = conv(n);
    cout << w << endl;
}