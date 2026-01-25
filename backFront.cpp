#include <iostream>
#include <string>
using namespace std;
int countSubsequence(string str, const string& subseq) {
    int m = str.size();
    int n = subseq.size();
    int count = 0;
    
    while (true) {
        int j = 0;
        for (int i = 0; i < m && j < n; i++) {
            if (str[i] == subseq[j]) {
                j++;
            }
        }
        if (j == n) {
            count++;
            string newStr;
            j = 0;
            for (int i = 0; i < m; i++) {
                if (j < n && str[i] == subseq[j]) {
                    j++;
                } else {
                    newStr.push_back(str[i]);
                }
            }
            str = newStr;
            m = str.size();
        } else {
            break;
        }
    }
    
    return count;
}

int getMinLength(string s) {
    int countBack = countSubsequence(s, "back");
    int countFront = countSubsequence(s, "front");
    int lengthReduction = countBack * 3 + countFront * 4;

    return s.size() - lengthReduction;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << getMinLength(s) << endl;
    }
    return 0;
}
