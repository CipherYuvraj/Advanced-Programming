#include<bits/stdc++.h>

using namespace std;

void FindWordAndPositionContainsVowel(string words) {
    vector<string> v;
    stringstream ss(words);
    string w;
    while (ss >> w) v.push_back(w);
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++) {
        char c = tolower(v[i][0]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            cout << v[i] << " " << i + 1 << endl;
        }
    }
}

int main() {
    string words;
    getline(cin, words);
    FindWordAndPositionContainsVowel(words);
    return 0;
}