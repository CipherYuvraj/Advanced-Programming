#include <iostream>
#include <string>
using namespace std;

string convert_to_words(int num) {
    if (num == 0) {
        return "zero";
    }
    
    string ones[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    string tens[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    string teens[] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    
    string words = "";
    
    if (num >= 1000) {
        words += ones[num / 1000] + " thousand ";
        num %= 1000;
    }
    
    if (num >= 100) {
        words += ones[num / 100] + " hundred ";
        num %= 100;
    }
    
    if (num >= 10 && num <= 19) {
        words += teens[num - 10] + " ";
        num = 0;
    } else if (num >= 20) {
        words += tens[num / 10] + " ";
        num %= 10;
    }
    
    if (num >= 1 && num <= 9) {
        words += ones[num] + " ";
    }
    
    return words;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    string words = convert_to_words(num);
    cout << words << endl;
    
    return 0;
}