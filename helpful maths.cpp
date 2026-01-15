#include <iostream>
#include <string>
#include <algorithm> // For sort function

using namespace std;

bool isValid(const string& s) {
    if (s.length() > 100) {
        return false;
    }
    for (char c : s) {
        if (c != '1' && c != '2' && c != '3' && c != '+') {
            return false;
        }
    }
    return true;
}

string calculable(const string s) {

    string numbers;
    for (char c : s) {
        if (c != '+') {
            numbers += c;
        }
    }

    // Sort the numbers
    sort(numbers.begin(), numbers.end());

    string result;
    for (size_t i = 0; i < numbers.length(); ++i) {
        result += numbers[i];
        if (i != numbers.length() - 1) {
            result += '+';
        }
    }
    return result;
}

int main() {
    string s;
    do {

        cin >> s;
    } while (!isValid(s));

    string ch = calculable(s);
    cout << ch << endl;

    return 0;
}
